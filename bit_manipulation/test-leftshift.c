#include "main.h"
#include <stdio.h>
#include <limits.h>

void test_ls()
{
	unsigned long int pot = 0; //power of two
	unsigned long int exp = 0;
	unsigned long int limit = 64;
	unsigned long int one = 1;

	while (exp < limit)
	{
		//pot = one << exp;
		//printf("exp = %lu; pot = %lu\n", exp, pot);
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
