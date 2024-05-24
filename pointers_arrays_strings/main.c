#include "main.h"
#include <stdio.h>

/* testing task's sourcecode locally */
int main(void) 
{
	char str[] = "the quick brown fox jumped over the lazy dog";
	char str2[] = "hello, world!";
	printf("%s\n", str);
	puts_half(str);
	printf("%s\n", str);
	rev_string(str);
	printf("%s\n", str);
	//print_rev(str);
	//_puts(str);
	return (0);
}
