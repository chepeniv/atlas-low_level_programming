#include <criterion/assert.h>
#include <criterion/criterion.h>
#include <criterion/internal/assert.h>
#include <criterion/internal/test.h>

#include "../hash_tables.h"
#include "../hash_tables.test.h"

/*
 * shash_table_t *ht;
 * ht = shash_table_create(1024);
 * shash_table_set(ht, "y", "0");
 * shash_table_print(ht);
 * shash_table_set(ht, "j", "1");
 * shash_table_print(ht);
 * shash_table_set(ht, "c", "2");
 * shash_table_print(ht);
 * shash_table_set(ht, "b", "3");
 * shash_table_print(ht);
 * shash_table_set(ht, "z", "4");
 * shash_table_print(ht);
 * shash_table_set(ht, "n", "5");
 * shash_table_print(ht);
 * shash_table_set(ht, "a", "6");
 * shash_table_print(ht);
 * shash_table_set(ht, "m", "7");
 * shash_table_print(ht);
 * shash_table_print_rev(ht);
 * shash_table_delete(ht);
 */

/*
 * EXPECTED OUTPUT
 * {'y': '0'}
 * {'j': '1', 'y': '0'}
 * {'c': '2', 'j': '1', 'y': '0'}
 * {'b': '3', 'c': '2', 'j': '1', 'y': '0'}
 * {'b': '3', 'c': '2', 'j': '1', 'y': '0', 'z': '4'}
 * {'b': '3', 'c': '2', 'j': '1', 'n': '5', 'y': '0', 'z': '4'}
 * {'a': '6', 'b': '3', 'c': '2', 'j': '1', 'n': '5', 'y': '0', 'z': '4'}
 * {'a': '6', 'b': '3', 'c': '2', 'j': '1', 'm': '7', 'n': '5', 'y': '0', 'z': '4'}
 * {'z': '4', 'y': '0', 'n': '5', 'm': '7', 'j': '1', 'c': '2', 'b': '3', 'a': '6'}
 */

Test(internal, dup_char_ptr) {
	const char *original = "this string will be duplicated";
	char *duplicate = dup_char_ptr(original);
	cr_expect_str_eq(original, duplicate, "strings the not the same");
	cr_expect_neq(&original, &duplicate, "addresses are not different");
	free(duplicate);
}

Test(external, shash_table_create) {
	shash_table_t *new_table = shash_table_create(334);

	cr_expect_eq(new_table->size, (2 << 8), "sizes not equal");
	cr_expect_eq(new_table->shead, NULL, "shead not set to NULL");
	cr_expect_eq(new_table->stail, NULL, "stail not set to NULL");
	free(new_table->array);
	free(new_table);
}
