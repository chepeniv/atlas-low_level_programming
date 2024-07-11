#include "hash_tables.h"

/**
 * hash_table_set -
 * @ht:
 * @key:
 * @value:
 *
 * Return: success, 1; failure, 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, size;
	char *valdup, *keydup;
	hash_node_t **array, **pos, *new;

	if (key == NULL)
		return (0);

	size = ht->size;
	index = key_index(key, size);

	valdup = strdup(value);
	keydup = strdup(keydup);

	array = ht->array;
	pos = array + index;
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = keydup;
	new->value = valdup;
	new->next = NULL;
	*pos = new;

	return (1);
}
