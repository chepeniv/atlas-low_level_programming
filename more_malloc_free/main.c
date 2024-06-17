#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
	char *strA = "prefix string followed by :";
	char *strB = "a fraction of the suffix string";

	char *strAnB = string_nconcat(strA, strB, 8);
	printf("%s\n", strAnB);
	free(strAnB);

	return 0;
}
