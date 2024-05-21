#include "main.h"

/**
 * main - printout the string _putchar using a custom func
 *
 * Return: returns 0 upon successful execution
 */
int main(void)
{
	int i;
	char *p_str="_putchar";
	int size = sizeof(&p_str);

	for (i = 0 ; i <= size ; i++)
		_putchar(p_str[i]);

	return (0);
}
