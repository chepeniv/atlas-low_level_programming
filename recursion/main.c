#include <stdio.h>
#include "main.h"

void test_func(int num);

int main(void)
{
	int i;
/*
	char *strA = "Hello, World!";
	char *strB = "the quick brown fox jumped over the lazy dog";

	printf("test strings :\n");
	printf("\t%s\n", strA);
	printf("\t%s\n", strB);

	printf("function test :\n");
	printf("the string given is %d long\n", _strlen_recursion(strA));
*/
	for (i = 0; i < 50; i++)
	{
		test_func(i);
	}

	return (0);
}

void test_func(int num)
{
	int p = is_prime_number(num);
	char *result;

	if (p == 1)
		result = "PRIME";
	else
		result = "NOT prime";

	printf("%d is %s\n", num, result);
}
