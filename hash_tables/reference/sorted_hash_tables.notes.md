# php sorted hash tables

# basic concepts

in c because arrays are regions that can be accessed by offsets, keys are
integers and need to be continuous.

php arrays support both string keys and non-continuous integers as well as a mix
of both.

there are two approaches to implementing the same in c:
- __binary search tree__ wherein both lookup and insert complexity is `O(log n)`
  (`n` being the number of elements in the table.)
- __hashtable__ with an average lookup/insert complexity of `O(1)` (constant
  time). this is preferable in most cases

in a hashtable a string value is converted into an integer key using a hash
function which is then used to offset on a standard c array. the primary concern
is that the number of possible integers (2^32, 2^64) is much much smaller than
the number of possible strings, which leads to the inevitability of collisions
(wherein two values result in the same key)

to mitigate this we need to implement some sort of collision resolution policy:
- __open addressing__ (not covered here)
- __chaining__ wherein all the elements having the same hashkey are stored in a
  linked list

to lookup calculate the hashkey and then iterate through the linked list until a
match is found.

to make operations more efficient use doubly-linked list

in php because hashtables are ordered traversing the hashkey array would return
the elements in the same order in which they where inserted. this is implemented
by a _separate_ super-imposed data structure, a FIFO-ordered doubly-linked list.

# `HashTable` and 'Bucket' structures

```c
/* zend_hash.h */
typedef struct _bucket {
	ulong h;                  /* hash of key */
	uint nKeyLength;          /* length of key */
	void *pData;              /* = &pDataPtr ? */
	void *pDataPtr;           /* ? */

	struct bucket *pNext;     /* next collision */
	struct bucket *pLast;     /* prev collision  */
	struct bucket *pListNext; /* next sorted */
	struct bucket *pListLast; /* prev sorted */

	char *arKey;              /* pointer to key */
} bucket;

typedef struct _hashtable {
	uint nTableSize;
	uint nTableMask;
	uint nNumOfElements;
	ulong nNextFreeElement;
	Bucket *pInternalPointer;
	Bucket *pListHead;
	Bucket *pListTail;
	Bucket **arBuckets;
	dtor_func_t pDestructor;
	zend_bool persistent;
	unsigned char nApplyCount;
	zend_bool bApplyProtection;
	#if ZEND_DEBUG
	int inconsistent;
	#endif
} HashTable;
```

in php, because arrays are not of a fixed size they must be dynamically
allocated. whenever the entries in a table surpass the table length, it must be
incremented by a power of two. it cannot be decremented.

since the return of the hash function is a`ulong` and the size of the table is
typically much smaller than that, the index is set to `index = hash %
table_size` which is equivalent to `index = hash & (tablesize - 1)` because
`table_size = 2^n` for some integer `n`. to illustrate:

```c
table_size     = 128 = 0b 00000000 00000000 00000000 10000000;
table_size - 1 = 127 = 0b 00000000 00000000 00000000 01111111;
```

because `table_size - 1` sets all the bits below `2^n`, `hash & (table_size -1)`
will only keep the bits of the hash that are less than `table_size`. thus, this
value is known as the 'table mask'. using a masking operation rather than modulo
optimizes performance.
