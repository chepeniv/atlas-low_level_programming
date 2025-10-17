#include <criterion/criterion.h>
#include <criterion/assert.h>
#include <criterion/redirect.h>
#include <criterion/new/assert.h>
#include <stdio.h>

#include "../hash_tables.h"
#include "../hash_tables.test.h"

/* INTERNAL API */

Test(internal, dup_string, .disabled = 1)
{
	char *original = "this string will be duplicated";
	char *duplicate = dup_string(original);

	cr_expect(eq(str, duplicate, original), "strings the not the same");
	cr_expect(ne(ptr, &original, &duplicate), "addresses are not different");

	free(duplicate);
}

Test(internal, init_ht_array, .timeout = 8, .disabled = 1)
{
	ulong size = 32;
	shash_table_t *ht = malloc(sizeof(shash_table_t));
	shash_node_t **arr = malloc(sizeof(void *) * size);

	ht->size = size;
	ht->array = arr;
	init_ht_array(ht);
	for (ulong i = 0; i < size; i++)
		cr_expect(zero(ptr, ht->array[i]));
	free(arr);
	free(ht);
}

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

Test(external, shash_table_set_get, .disabled = 1)
{ }

Test(external, shash_table_set, .disabled = 1)
{ }

Test(external, shash_table_get, .disabled = 1)
{ }

Test(external, shash_table_print, .disabled = 1)
{
	FILE *expected_out;
	expected_out = fopen("dev_tests/expected.out", "r");

	cr_redirect_stdout();
	printf("hello, world\n");
	fflush(stdout);

	/* cr_expect_stdout_eq_str("hello, world"); */
	cr_expect_stdout_eq(expected_out);
	fclose(expected_out);
}

Test(external, shash_table_print_rev, .disabled = 1)
{ }

Test(external, shash_table_delete, .disabled = 1)
{
	ulong size = 334;
	shash_table_t *new_table = shash_table_create(size);
	(void) new_table;
	shash_table_delete(new_table);
}

Test(intranet_example, task_0, .disabled = 1)
{
	shash_table_t *ht;
	FILE *expected_out;

	expected_out = fopen("dev_tests/expected.out", "r");
	ht = shash_table_create(1024);

	cr_redirect_stdout();
		shash_table_set(ht, "y", "0");
		shash_table_print(ht);
		shash_table_set(ht, "j", "1");
		shash_table_print(ht);
		shash_table_set(ht, "c", "2");
		shash_table_print(ht);
		shash_table_set(ht, "b", "3");
		shash_table_print(ht);
		shash_table_set(ht, "z", "4");
		shash_table_print(ht);
		shash_table_set(ht, "n", "5");
		shash_table_print(ht);
		shash_table_set(ht, "a", "6");
		shash_table_print(ht);
		shash_table_set(ht, "m", "7");
		shash_table_print(ht);
		shash_table_print_rev(ht);
		shash_table_delete(ht);
	fflush(stdout);
	cr_expect_stdout_eq(expected_out);
	fclose(expected_out);
}

Test(intranet_checker, task_0, .disabled = 1)
{ }
