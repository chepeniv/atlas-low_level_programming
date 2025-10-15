#include "hash_tables.h"

/**
 * key_index - generate index given key
 * @key: string used to generate hash
 * @size: generates index from hash
 *
 * Return: generated index
 */

unsigned long int
key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
