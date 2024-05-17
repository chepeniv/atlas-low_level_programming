//#include <stdio.h>
#include "main.h"

/**
 * main - printout the string _putchar
 *
 * Return: returns 0 upon successful execution
 */
int main(void)
{
	const char p_str[]="_putchar\n";
	int pstr_size = sizeof(p_str);
	int i;
	char c;
	
	for (i = 0 ; i < pstr_size ; ++i)
	{
		c = p_str[i];
		_putchar(c);
	}

	return (0);
}
