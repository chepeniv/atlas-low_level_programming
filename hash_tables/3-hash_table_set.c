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
	unsigned long int index;
	char *keydup, *valdup;
	hash_node_t **array, *first, *pos, *new;

	if (key == NULL)
		return (0);

	index = key_index((unsigned char *) key, ht->size);

	keydup = strdup(key);
	valdup = strdup(value);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = keydup;
	new->value = valdup;
	new->next = NULL;

	array = ht->array;
	first = *array;
	pos = first + index;
	pos = new;

	return (1);
}
