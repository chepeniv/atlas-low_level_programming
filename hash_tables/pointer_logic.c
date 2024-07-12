#include "hash_tables.h"

typedef struct _numnode {
	int num;
} numnode;

int main(void)
{
	numnode **array, *newnode;

}

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *valdup, *keydup;
	hash_node_t *array, *new;

	if (key == NULL)
		return (0);

	index = key_index((unsigned char *) key, ht->size);

	keydup = strdup(key);
	valdup = strdup(value);

	array = *(ht->array);
	array[index] = malloc(sizeof(hash_node_t));
	if (array[index] == NULL)
		return (0);
	array[index]->key = keydup;
	array[index]->value = valdup;
	array[index]->next = NULL;

	return (1);
}
