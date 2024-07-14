#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht;
	unsigned long int size = 1024;

    ht = hash_table_create(size);

    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "C", "is fun");
    hash_table_set(ht, "hetairas", "the data entered for key instance 3");
    hash_table_set(ht, "heliotropes", "the data entered for key instance 4");
    hash_table_set(ht, "depravement", "the data entered for key instance 5");
    hash_table_set(ht, "stylist", "the data entered for key instance 6");
    hash_table_set(ht, "subgenera", "clash with stylist");
    hash_table_set(ht, "joyful", "the data entered for key instance 7");
    hash_table_set(ht, "rediscribed", "the data entered for key instance 8");
    hash_table_set(ht, "dram", "the data entered for key instance 9");
    hash_table_set(ht, "vivency", "clash with dram");

	hash_table_print(ht);

    return (EXIT_SUCCESS);
}
