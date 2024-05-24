#include "main.h"

/**
 * rev_string - print to stdout a given string in reverse
 * @c: pointer to the start of a string
 *
 * Return: void
 */
void rev_string(char *c)
{
	char *front = c;
	char *back = c;
	char temp;

	while (*back != '\0')
	{
		back++;
	}
	back--;

	while (front < back)
	{
		temp = *back;
		*back = *front;
		*front = temp;

		front++;
		back--;
	}
}
