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
	hash_node_t **pos, *old, *temp, *new;

	if (key == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	keydup = strdup(key);
	valdup = strdup(value);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL || valdup == NULL || keydup == NULL)
	{
		free(keydup);
		free(valdup);
		return (0);
	}
	new->key = keydup;
	new->value = valdup;
	new->next = NULL;

	pos = ht->array + index;
	old = *pos;
	if (old != NULL)
	{
		temp = old;
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				free(new->key);
				free(new);
				temp->value = valdup;
				return (1);
			}
			temp = temp->next;
		}
	}
	new->next = old;
	*pos = new;
	return (1);
}
