#include "hash_tables.h"

/**
 * hash_table_create - attemp to create a hash table
 * @size: size of the hash table's node array
 *
 * Return:
 * success,address to the newly created hashtable;
 * failure, NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t *htarray;

	htarray = malloc(sizeof(hash_node_t) * size);
	if (htarray == NULL)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = &htarray;

	return (ht);
}
