#include "main.h"
#include <stdio.h>
#include <limits.h>

void test_ls()
{
	unsigned long int pot = 0; //power of two
	long int exp = 0;

	while (exp < 64)
	{
		pot = 1 << exp;
		printf("exp = %lu; pot = %lu\n", exp, pot);
		exp++;
	}
}

int main(void)
{
	test_ls();
	return 0;
}
