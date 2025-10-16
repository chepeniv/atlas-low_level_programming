#include <criterion/criterion.h>
#include <criterion/new/assert.h>

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

/* INTERNAL API */

Test(internal, dup_string)
{
	char *original = "this string will be duplicated";
	char *duplicate = dup_string(original);

	cr_expect(eq(str, duplicate, original), "strings the not the same");
	cr_expect(ne(ptr, &original, &duplicate), "addresses are not different");

	free(duplicate);
}

Test(internal, init_ht_arary, .disabled = 1)
{ }

Test(internal, insert_sorted, .disabled = 1)
{ }

Test(internal, get_collision_head, .disabled = 1)
{ }

Test(internal, append_collision_chain, .disabled = 1)
{ }

Test(internal, insert_collision, .disabled = 1)
{ }

/* EXTERNAL API */

Test(external, shash_table_create, .disabled = 1)
{
	ulong size = 334;
	shash_table_t *new_table = shash_table_create(size);

	cr_expect(ge(sz, new_table->size, size), "sizes not equal");
	cr_expect(eq(ptr, new_table->shead, NULL), "shead not set to NULL");
	cr_expect(eq(ptr, new_table->stail, NULL), "stail not set to NULL");

	free(new_table->array);
	free(new_table);
}

Test(external, shash_table_set, .disabled = 1)
{ }

Test(external, shash_table_get, .disabled = 1)
{ }

Test(external, shash_table_print, .disabled = 1)
{ }

Test(external, shash_table_print_rev, .disabled = 1)
{ }

Test(external, shash_table_delete, .disabled = 1)
{
	ulong size = 334;
	shash_table_t *new_table = shash_table_create(size);
	(void) new_table;
	shash_table_delete(new_table);
}
