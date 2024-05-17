#include "main.h"

/**
 * print_alphabet - printout lowercase alphabet
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

/**
 * print_alphabet_x10 - calls print_alphabet() ten times
 *
 * Return: returns void
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0 ; i < 10 ; ++i)
	{
		print_alphabet();
	}
}
