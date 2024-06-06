#include "main.h"
#include <stdio.h>

int main(void)
{
	char *strA = "Hello, World!";
	char *strB = "the quick brown fox jumped over the lazy dog";

	printf("test strings :\n");
	printf("\t%s\n", strA);
	printf("\t%s\n", strB);
	printf("function test :\n");
	
	_puts_recursion(strA);
	_puts_recursion(strB);

	return (0);
}

