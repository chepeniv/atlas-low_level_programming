#include "hash_tables.h"

/**
 * hash_table_print - destroy entire contents of given hashtable
 * @ht: pointer to hashtable
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i, len;
	hash_node_t **pos, *node, *prev;

	if (ht == NULL)
		return;

	prev = NULL;
	len = ht->size;
	for (i = 0; i < len; ++i)
	{
		pos = ht->array + i;
		node = *pos;
		while (node != NULL)
		{
			prev = node;
			node = node->next;
			free(prev->key);
			free(prev->value);
			free(prev);
		}
	}
	free(ht->array);
	free(ht);
}
