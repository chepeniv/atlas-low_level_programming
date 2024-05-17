#include "main.h"

/**
 * _islower - determines whether a given char is lowercase
 * @c: a char or int to be interpreted as ascii code and evaluated
 *
 * Return: returns 1 for lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
