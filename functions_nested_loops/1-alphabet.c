#include "main.h"

/**
 * main - printout lowercase alphabet
 *
 * Return: returns void
 */
void print_alphabet(void)
{
	int i;

	for (i = 97 ; i <= 122 ; ++i)
	{
		_putchar(i);
	}
	_putchar(10);
}
