#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
	char *mystring;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "C", "is fun");
    hash_table_set(ht, "hetairas", "the data entered for key instance 3");
    hash_table_set(ht, "heliotropes", "the data entered for key instance 4");
    hash_table_set(ht, "depravement", "the data entered for key instance 5");
    hash_table_set(ht, "stylist", "the data entered for key instance 6");
    hash_table_set(ht, "joyful", "the data entered for key instance 7");
    hash_table_set(ht, "rediscribed", "the data entered for key instance 8");
    hash_table_set(ht, "dram", "the data entered for key instance 9");

	mystring = hash_table_get(ht, "joyful");
	printf("%s\n", mystring);

    return (EXIT_SUCCESS);
}
