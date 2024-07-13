#include "hash_tables.h"

/**
 * hash_table_get - attempts to retrieve the data associated with a key entry
 * @ht: pointer to the hashtable
 * @key: a nonempty key string
 *
 * Return: success, string pointer to the node's data; failure, NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *pos;
	char *strdata;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	pos = (*ht->array) + index;
	strdata  = strdup(pos->value);
	return  (strdata);
}
