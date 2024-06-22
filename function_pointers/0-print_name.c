#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - a function that callsback another
 * @name: parameter to passon to the callback
 * @f: the function to callback
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}



