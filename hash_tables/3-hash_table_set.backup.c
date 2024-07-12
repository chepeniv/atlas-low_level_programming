#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *keydup, *valdup;
	hash_node_t *new, **pos;

	index = key_index((const unsigned char *)key, ht->size);
	keydup = strdup(key);
	valdup = strdup(value);

	new = malloc(sizeof(hash_node_t));
	new->key = keydup;
	new->value = valdup;
	new->next = NULL;

	printf("index:\t\t\t%lu\n", index);
	printf("new:\t\t\t%p\n", new);
	printf("ht->array:\t\t%p\n", ht->array);
	printf("ht->array + 1:\t\t%p\n", ht->array + 1);
	printf("diff of sizeof void *:\t%lu\n", sizeof(void *));
	printf("ht->array + index:\t%p\n", ht->array + index);
	pos = ht->array + index;
	printf("pos, *pos:\t\t%p, %p\n", pos, *pos);
	*pos = new;
	printf("pos, *pos:\t\t%p, %p\n", pos, *pos);

	return (1);
}
