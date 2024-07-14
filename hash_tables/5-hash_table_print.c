#include "hash_tables.h"

/**
 * hash_table_print - output the contents of a given hashtable
 * @ht: pointer to the hashtable
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, len;
	hash_node_t **pos, *node;

	if (ht == NULL)
		return;

	len = ht->size;
	printf("{");
	for (i = 0; i < len; ++i)
	{
		pos = ht->array + i;
		node = *pos;
		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			if (node->next != NULL)
				printf(", ");
			node = node->next;
		}
	}
	printf("}\n");
}
