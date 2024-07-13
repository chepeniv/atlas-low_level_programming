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
	hash_node_t *pos;

	if (key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	keydup = strdup(key);
	valdup = strdup(value);

	pos = *ht->array + index;
	pos = malloc(sizeof(hash_node_t));
	if (pos = NULL || keydup == NULL || valdup == NULL)
	{
		free(pos);
		free(keydup);
		free(valdup);
		return (0);
	}

	pos->key = keydup;
	pos->value = valdup;
	pos->next = NULL;

	return (1);
}
