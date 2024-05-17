#include "main.h"

/**
 * _isalpha - determines whether a given char is alphabetic
 * @c: a char or int to be interpreted as ascii code and evaluated
 *
 * Return: returns 1 for lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
