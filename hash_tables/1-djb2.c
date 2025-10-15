#include "hash_tables.h"

/**
 * hash_djb2 - implementation of djb2
 * @str: string used to generate hash
 *
 * Return: generated hash
 */

unsigned long int
hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381; /* prime number */

	/* return ptr first, then incr ptr, then deref the returned ptr, */
	while ((c = *str++))
		/* in general [n << s] <=> [n * 2^s] */
		/* 33h + c */
		hash = ((hash << 5) + hash) + c;

	return (hash);
}
