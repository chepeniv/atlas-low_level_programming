#include "hash_tables.h"

/**
 * key_index - implementation of djb2
 * @key: string used to generate hash
 * @str: string used to generate hash
 *
 * Return: generated hash
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
