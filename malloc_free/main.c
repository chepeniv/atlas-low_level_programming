#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{

	char *c_string;

	c_string = create_array(2, '+');
	printf("%s\n", c_string);
	free(c_string);

	c_string = create_array(5, 'c');
	printf("%s\n", c_string);
	free(c_string);

	c_string = create_array(4, 'A');
	printf("%s\n", c_string);
	free(c_string);

	c_string = create_array(8, '/');
	printf("%s\n", c_string);
	free(c_string);

	c_string = NULL;
	return 0;
}
