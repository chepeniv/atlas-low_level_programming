#include "hash_tables.h"
#include <stdint.h> /* standardized types */
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

shash_node_t **
get_collision_head(shash_table_t *ht, shash_node_t *node)
{
	ulong offset;
	shash_node_t **index;

	offset = key_index((const unsigned char *)node->key, ht->size);
	index = ht->array + offset;

	return (index);
}

int
append_collision_chain(shash_node_t *head, shash_node_t *node)
{
	while (head->next)
	{
		/* key already exist, update value */
		if (!strcmp(head->key, node->key))
		{
			free(head->value);
			head->value = node->value;
			free(node->key);
			free(node);
			return (0);
		}
		head = head->next;
	}
	/* new node, append to last */
	head->next = node;
	return (1);
}

int
insert_collision(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t **head;

	head = get_collision_head(ht, node);
	if (*head)
	{
		/* chain already setup, append to existing collisions */
		return (append_collision_chain(*head, node));
	}
	else
	{
		/* index is empty, insert first collision */
		head = &node;
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

	new_node = malloc(sizeof(shash_node_t));
	new_node->key = dup_string(key);
	new_node->value = dup_string(value);

	/* 0 existing node was updated, 1 new node was inserted */
	if (insert_collision(ht, new_node))
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
		{
			break;
		}
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
		{
			break;
		}
	}
	printf("}\n");
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
