#ifndef HASH_TABLES_TEST
#define HASH_TABLES_TEST

#include "hash_tables.h"

char * dup_char_ptr(const char *orig);
void insert_sorted(shash_table_t *ht, shash_node_t *node);
void insert_collision(shash_table_t *ht, shash_node_t *node, void *index);

#endif /* HASH_TABLE_TEST */
