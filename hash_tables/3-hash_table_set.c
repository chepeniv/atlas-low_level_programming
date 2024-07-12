#include "hash_tables.h"

/**
 * hash_table_set - attempts to add an entry into the hashtable
 * @ht: pointer to the hashtable
 * @key: a nonempty string
 * @value: any string data
 *
 * Return: success, 1; failure, 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *keydup, *valdup;
	hash_node_t *new, **pos;

	index = key_index((const unsigned char *)key, ht->size);
	keydup = strdup(key);
	valdup = strdup(value);

	new = malloc(sizeof(hash_node_t));
	new->key = keydup;
	new->value = valdup;
	new->next = NULL;

	pos = ht->array + index;

	**pos = *new;

	return (1);
}
