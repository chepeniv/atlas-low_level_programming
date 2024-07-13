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
	hash_node_t *new, *pos;

	if (key == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	keydup = strdup(key);

	if (value != NULL)
		valdup = strdup(value);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL || keydup == NULL || valdup == NULL )
	{
		free(new);
		free(keydup);
		free(valdup);
		return (0);
	}

	pos = (*ht->array) + index;
	pos = new;
	pos->key = keydup;
	pos->value = valdup;
	pos->next = NULL;

	return (1);
}
