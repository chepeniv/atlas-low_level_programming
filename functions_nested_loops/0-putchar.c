#include "main.h"

/**
 * main - printout the string _putchar using a custom func
 *
 * Return: returns 0 upon successful execution
 */
int main(void)
{
	int i;
	char c;
	const char p_str[]="_putchar";
	int pstr_size = sizeof(p_str);

	for (i = 0 ; i < pstr_size ; ++i)
	{
		c = p_str[i];
		_putchar(c);
	}

	_putchar('\n');

	return (0);
}
