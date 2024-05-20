#include "main.h"
#include <stdio.h>

int get_first(int); //done
int get_last(int); //done
int digits_in(int); //done
int reduce_int(int); //done
int rev_int(int);

int exp(int, int); //done

void into_string(char str[32], int); //done
void print_rev(int);
void print_fwrd(int);

int get_first(int n)
{
	int f = n;

	while (f >= 10)
		f /= 10;

	return f
}

void into_string(char str[32], int n)
{
	int i = 30;
	while (n !=0)
	{
		str[i--] = (n % 10) + '0';
		n /= 10;
	}
}

int digits_in(int n)
{
	if (n < 10) return 1;
	return 1 + digits_in(n /10);
}

int get_last(int n)
{
	return n % 10;
}

int exp(int base, int exp)
{
	int pwr = base;

	while (exp > 1)
	{
		pwr = pwr * base;
		--exp;
	}
	return (pwr);
}

int reduce_int(int n) 
{
 	return (n / 10);
}

int rev_int(int n) //undone
{
	int modulo; 
	int place = 0; 
	int rsum = 0; 

	while (n > 0)
	{
		modulo = n % 10;
		place++;

		if (modulo == 0)
		{
			rsum = rsum * 10;
		}
		else
		{
			rsum = rsum + (modulo * _exp(10, place));
		}

		n = reduce_int(n);
	}
	return (rsum);
}

void print_rev(int n) //undone
{
	while (n != 0) 
	{
		int l = n % 10;
		_putchar(l + '0');
		m = m / 10;
	}
}

void print_fwrd(int n) //undone
{
	int first;
	int num = n;
	int length = digits_in(num);

	while (length > 0) 
	{
		first = get_first(num);
		
		_putchar(first + '0');

		num = num - (first * exp(10, length));

		--length;

	}
}

