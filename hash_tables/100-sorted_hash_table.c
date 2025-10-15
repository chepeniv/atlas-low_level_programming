#include "hash_tables.h"
#include <stdint.h> /* standardized types */
#include <stdlib.h>
#include <string.h>

/* INTERNAL FUNCTIONS */

char *
dup_char_ptr(const char *orig)
{
	char *dup;
	size_t len;

	len = sizeof(char) * (strlen(orig) + 1);
	dup = malloc(len);
	strcpy(dup, orig);

	return (dup);
}

/* sort the linked list by key (ascii value) rather than chronologically */
void
insert_sorted(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *next;

	if (!ht->shead)
	{
		/* first insertion; sorted list must be initialized */
		ht->shead = node;
		ht->stail = node;
		node->snext = NULL;
		node->sprev = NULL;
	}
	else
	{
		/* find the node that follows the one at hand */
		next = ht->shead;
		while (strcmp(node->key, next->key) >= 0)
		{
			if (next->snext)
				next = next->snext;
			else
				break;
		}

		/* check whether it slots in at the head or at the tail */
		if (!next->sprev)
			ht->shead = node;
		if (!next->snext && strcmp(node->key, next->key) >= 0)
			ht->stail = node;

		/* update node links */
		next->sprev = node;
		node->snext = next;
		node->sprev = next->sprev;
		if (node->sprev)
			node->sprev->snext = node;
	}
}

void
insert_collision(shash_table_t *ht, shash_node_t *node, void *index)
{
	(void) ht;
	(void) node;
	(void) index;
}

/* EXTERNAL FUNCTIONS */

shash_table_t *
shash_table_create(unsigned long int size)
{
	shash_table_t *new_sorted_ht;
	unsigned long int power_of_two = 1;

	while (size > power_of_two)
		power_of_two <<= 1;

	new_sorted_ht = malloc(sizeof(shash_table_t));
	new_sorted_ht->size = power_of_two;
	new_sorted_ht->array = malloc(power_of_two * sizeof(void *));
	new_sorted_ht->shead = NULL;
	new_sorted_ht->stail = NULL;

	return (new_sorted_ht);
}

int
shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node;

	new_node = malloc(sizeof(shash_node_t));
	new_node->key = dup_char_ptr(key);
	new_node->value = dup_char_ptr(value);

	insert_sorted(ht, new_node);

	return (0);
}

char *
shash_table_get(const shash_table_t *ht, const char *key)
{
	(void) ht;
	(void) key;
	return (NULL);
}

void
shash_table_print(const shash_table_t *ht)
{
	/* should print the hash table using the sorted linked list */
	(void) ht;
}

void
shash_table_print_rev(const shash_table_t *ht)
{
	/*
	 * should print the hash tables key/value pairs in reverse order using the
	 * sorted linked list
	 */
	(void) ht;
}

void
shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node;

	while (ht->shead)
	{
		node = ht->shead;
		ht->shead = node->snext;
		free(node->key);
		free(node->value);
		free(node);
	}

	free(ht->array);
	free(ht);
}
