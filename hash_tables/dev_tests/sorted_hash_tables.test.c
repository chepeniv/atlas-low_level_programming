#include <criterion/criterion.h>
#include <criterion/assert.h>
#include <criterion/logging.h>
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
	ht->array = create_ht_array(ht->size);
	for (ulong i = 0; i < size; i++)
		cr_expect(zero(ptr, ht->array[i]));
	free(arr);
	free(ht);
}

Test(internal, insert_sorted, .timeout = 8, .disabled = 1)
{
	shash_table_t *ht = shash_table_create(8);
	shash_node_t *node;
	char key[2], val[2];

	key[1] = '\0';
	val[1] = '\0';

	key[0] = 'z';
	val[0] = '1';

	cr_log_info("creating sorted linked list\n");
	for (int i = 0; i < 9; i++)
	{
		node = create_ht_node(key, val);
		insert_sorted(ht, node);
		key[0]--;
		val[0]++;
	}

	 key[0] = 'a';
	 val[0] = '1';
	 for (int i = 0; i < 9; i++)
	 {
		node = create_ht_node(key, val);
		insert_sorted(ht, node);
		key[0]++;
		val[0]++;
	 }

	 key[0] = 'e';
	 val[0] = '1';
	 for (int i = 0; i < 9; i++)
	 {
		node = create_ht_node(key, val);
		insert_sorted(ht, node);
		key[0] += 2;
		val[0]++;
	 }

	cr_log_info("destroying sorted ht data structure\n");
	shash_table_delete(ht);
}

/* EXTERNAL API */

Test(external, shash_table_create, .disabled = 1)
{
	ulong size = 334;
	shash_table_t *new_table = shash_table_create(size);

	cr_expect(ge(sz, new_table->size, size), "sizes not equal");
	cr_expect(eq(ptr, new_table->shead, NULL), "shead not set to NULL");
	cr_expect(eq(ptr, new_table->stail, NULL), "stail not set to NULL");
	cr_expect(zero(ptr, new_table->array[0]), "array[0] not set to NULL");
	cr_expect(eq(ptr, new_table->array[size], NULL), "array[size] not set to NULL");

	free(new_table->array);
	free(new_table);
}

Test(external, shash_table_set, .timeout = 8, .disabled = 1)
{
	char key[2], val[2];
	shash_table_t *sorted_ht;

	key[0] = 'a';
	key[1] = '\0';
	val[0] = '1';
	val[1] = '\0';

	sorted_ht = shash_table_create(4);

	for (int i = 0; i < 8; i++)
	{
		shash_table_set(sorted_ht, key, val);
		key[0]++;
		val[0]++;
	}

	shash_table_delete(sorted_ht);
}

Test(external, shash_table_set_get, .disabled = 1)
{
	char *key = "key_a", *value = "value_a", *value_found;
	shash_table_t *sorted_ht = shash_table_create(7);

	cr_log_info("running shash_table_get with no entries");
	value_found = shash_table_get(sorted_ht, "i");
	cr_expect(zero(ptr, value_found));

	cr_log_info("running shash_table_get with no entries, attempt 2");
	value_found = shash_table_get(sorted_ht, "j");
	cr_expect(zero(ptr, value_found));

	shash_table_set(sorted_ht, key, value);
	value_found = shash_table_get(sorted_ht, key);
	cr_expect(eq(str, value, value_found));

	shash_table_set(sorted_ht, "new_k", "taohunht");
	value_found = shash_table_get(sorted_ht, "new_k");
	cr_expect(eq(str,  "taohunht", value_found));

	shash_table_set(sorted_ht, "k", "taohunht");
	value_found = shash_table_get(sorted_ht, "k");
	cr_expect(eq(str,  "taohunht", value_found));

	shash_table_set(sorted_ht, "a", "apple");
	value_found = shash_table_get(sorted_ht, "a");
	cr_expect(eq(str, "apple", value_found));

	shash_table_set(sorted_ht, "b", "banana");
	value_found = shash_table_get(sorted_ht, "b");
	cr_expect(eq(str, "banana", value_found));

	value_found = shash_table_get(sorted_ht, "x");
	cr_expect(zero(ptr, value_found));

	value_found = shash_table_get(sorted_ht, "y");
	cr_expect(zero(ptr, value_found));

	shash_table_delete(sorted_ht);
}

Test(external, shash_table_print, .disabled = 1)
{
	FILE *expected_out;
	expected_out = fopen("dev_tests/expected.out", "r");

	cr_redirect_stdout();
	printf("hello, world\n");
	fflush(stdout);

	cr_expect_stdout_eq(expected_out);
	fclose(expected_out);
}

Test(external, shash_table_delete, .disabled = 1)
{
	ulong size = 334;
	shash_table_t *new_table = shash_table_create(size);
	(void) new_table;
	shash_table_delete(new_table);
}

/* ASSIGNMENT CHECKS */

Test(intranet_example, task_0, .disabled = 0)
{
	shash_table_t *ht;
	FILE *expected_out;
	FILE *actual_out;

	ht = shash_table_create(1024);

	freopen("dev_tests/actual.out", "w", stdout);

	shash_table_set(ht, "y", "0");
	shash_table_set(ht, "y", "0");
	shash_table_print(ht);
	shash_table_set(ht, "j", "1");
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
	shash_table_set(ht, "m", "7");
	shash_table_print(ht);
	shash_table_print_rev(ht);
	shash_table_delete(ht);

	fflush(stdout);
	fclose(stdout);

	actual_out = fopen("dev_tests/actual.out", "r");
	expected_out = fopen("dev_tests/expected.out", "r");

	cr_expect_file_contents_eq(actual_out, expected_out, "files not equal");
	fclose(actual_out);
	fclose(expected_out);
}

Test(intranet_checker, task_0, .disabled = 1)
{ }
