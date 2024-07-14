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
	hash_node_t **htarray;
	unsigned long int i = 0;

	htarray = malloc(sizeof(hash_node_t *) * size);
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL || htarray == NULL)
	{
		free(htarray);
		return (NULL);
	}
	while (i < size)
	{
		htarray[i] = NULL;
		++i;
	}

	ht->size = size;
	ht->array = htarray;

	return (ht);
}
