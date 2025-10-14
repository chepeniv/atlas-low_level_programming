#include "hash_tables.h"
#include <stdint.h> /* standardized types */
#include <stdlib.h>
#include <string.h>

/* EXTERNAL FUNCTIONS */

shash_table_t *
shash_table_create(unsigned long int size)
{
	shash_table_t *new_sorted_ht;
	unsigned long int power_of_two = 1;

	while (size < power_of_two)
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

	return (0);
}

char *
shash_table_get(const shash_table_t *ht, const char *key)
{
	return (NULL);
}

void
shash_table_print(const shash_table_t *ht)
{
	/* should print the hash table using the sorted linked list */
}

void
shash_table_print_rev(const shash_table_t *ht)
{
	/*
	 * should print the hash tables key/value pairs in reverse order using the
	 * sorted linked list
	 */
}

void
shash_table_delete(shash_table_t *ht)
{
}
