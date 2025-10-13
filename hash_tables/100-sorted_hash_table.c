#include "hash_tables.h"

shash_table_t *
shash_table_create(unsigned long int size)
{
	return (NULL);
}

int
shash_table_set(shash_table_t *ht, const char *key, const char *value)
{

	/*
	 * the key-value pair should be inserted in the sorted list at the right
	 * place
	 *
	 * note that here we do not want to do exactly like php: we want to create
	 * a sorted linked list, by key (sorted on ascii value), that we can print
	 * by traversing it
	 */

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
