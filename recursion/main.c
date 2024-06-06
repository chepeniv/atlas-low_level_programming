#include <stdio.h>
#include "main.h"

int main(void)
{
	char *strA = "Hello, World!";
	char *strB = "the quick brown fox jumped over the lazy dog";

	printf("test strings :\n");
	printf("\t%s\n", strA);
	printf("\t%s\n", strB);

	printf("function test :\n");
	printf("the string given is %d long\n", _strlen_recursion(strA));

	return (0);
}

