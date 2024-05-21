#include "main.h"

/**
 * main - printout the string _putchar using a custom func
 *
 * Return: returns 0 upon successful execution
 */
int main(void)
{
	int i;
	char *str = "_putchar";
	int size = sizeof(str);

	for (i = 0 ; i < size ; i++)
		_putchar(str[i]);

	_putchar('\n');

	return (0);
}
