#include "main.h"

void into_string(char str[32], int n)
{
        int i = 30;
        while (n !=0)
        {
                str[i--] = (n % 10) + '0';
                n /= 10;
        }
}

void print_string(char str[32])
{
	int size = sizeof(*str);
	int i = 0;

	while (i < size)
	{
		_putchar(str[i]);
		++i;
	}
}

void print_int(int n)
{
	char str[32];

	into_string(str, n);
	print_string(str);
}

/**
 * print_to_98 - count from any given number towards 98
 * @n: the number to count from
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			print_int(i);
			_putchar(44);
			_putchar(32);
		}
	}
	else if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			print_int(i);
			_putchar(44);
			_putchar(32);
		}
	}
	print_int(98);
	_putchar(10);
	_putchar(10);
}
