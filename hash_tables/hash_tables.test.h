#ifndef HASH_TABLES_TEST
#define HASH_TABLES_TEST

#include "hash_tables.h"

char *dup_string(const char *orig);
void insert_sorted(shash_table_t *ht, shash_node_t *node);
int insert_collision(shash_table_t *ht, shash_node_t *node);
int append_collision_chain(shash_node_t *head, shash_node_t *node);
shash_node_t *create_ht_node(const char *key, const char *value);
shash_node_t **create_ht_array(ulong size);

#endif /* HASH_TABLE_TEST */
