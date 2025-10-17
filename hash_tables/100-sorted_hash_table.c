#include "hash_tables.h"
#include <stdint.h> /* standardized types */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* INTERNAL FUNCTIONS */

char *
dup_string(const char *orig)
{
	char *dup;
	size_t len;

	len = sizeof(char) * (strlen(orig) + 1);
	dup = malloc(len);
	strcpy(dup, orig);

	return (dup);
}

void
init_ht_array(shash_table_t *ht)
{
	for (ulong i = 0; i < ht->size; i++)
		ht->array[i] = NULL;
}

shash_node_t *
create_ht_node(const char *key, const char *value)
{
	shash_node_t *new_node;

	new_node = malloc(sizeof(shash_node_t));
	new_node->key = dup_string(key);
	new_node->value = dup_string(value);
	new_node->next = NULL;
	new_node->snext = NULL;
	new_node->sprev = NULL;

	return (new_node);
}

/* sort the linked list alphabetically by key */
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

int
append_collision_chain(shash_node_t *head, shash_node_t *node)
{
	shash_node_t *last;

	while (head)
	{
		/* key already exist, update value */
		if (!strcmp(head->key, node->key))
		{
			/*
			 * just in case the old value gets cashed elsewhere, this will avoid
			 * issues
			 */
			if (!strcmp(head->value, node->value))
				free(node->value);
			else
			{
				free(head->value);
				head->value = node->value;
			}
			free(node->key);
			free(node);
			return (0);
		}
		last = head;
		head = head->next;
	}
	/* new node, append to last */
	last->next = node;
	return (1);
}

int
insert_collision(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *head;
	ulong index;

	index = key_index((const unsigned char *)node->key, ht->size);

	head = ht->array[index];
	if (head)
		return (append_collision_chain(head, node));
	else
	{
		ht->array[index] = node;
		return (1);
	}
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
	init_ht_array(new_sorted_ht);
	new_sorted_ht->shead = NULL;
	new_sorted_ht->stail = NULL;

	return (new_sorted_ht);
}

int
shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node;

	new_node = create_ht_node(key, value);
	if (insert_collision(ht, new_node))
		insert_sorted(ht, new_node);

	return (0);
}

char *
shash_table_get(const shash_table_t *ht, const char *key)
{
	ulong offset;
	shash_node_t *index;

	offset = key_index((const unsigned char *)key, ht->size);
	index = ht->array[offset];

	if (!index)
		return (NULL);

	while (strcmp(index->key, key))
		if (index->next)
			index = index->next;
		else
			return (NULL);

	return (index->value);
}

/* should print the hash table using the sorted linked list */
void
shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	putchar('{');
	node = ht->shead;
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->snext)
		{
			node = node->snext;
			putchar(' ');
		}
		else
			break;
	}
	printf("}\n");
}

void
shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	putchar('{');
	node = ht->stail;
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->sprev)
		{
			node = node->sprev;
			putchar(' ');
		}
		else
			break;
	}
	printf("}\n");
}

void
shash_table_delete(shash_table_t *ht)
{
	shash_node_t *next, *prev;

	/*
	 * while (ht->shead)
	 * {
	 * 	node = ht->shead;
	 * 	ht->shead = node->snext;
	 * 	free(node->key);
	 * 	free(node->value);
	 * 	free(node);
	 * 	}
	 */

	for (ulong i = 0; i < ht->size; i++)
	{
		next = ht->array[i];
		while (next)
		{
			prev = next;
			next = next->next;
			free(prev->key);
			free(prev->value);
			free(prev);
		}
	}

	free(ht->array);
	free(ht);
}
