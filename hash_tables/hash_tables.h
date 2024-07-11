#ifndef HASH_TABLES_H
#define HASH_TABLES_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct hash_node_s - hash table node
 *
 * @key: the key string
 * @value: data corresponding to the key
 * @next: pointer to the next node in a List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: size of the array
 * @array: array of the given size
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);

#endif
