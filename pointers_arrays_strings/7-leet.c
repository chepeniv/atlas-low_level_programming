#include "main.h"

/**
 * leet - translates given text into leet-speak
 * @text: the string to operate on
 *
 * Return: pointer to string
 *
 * RULES :
 * 	one if
 * 	two loops
 * 	no swtich
 * 	no ternary
 */
char *leet(char *text)
{
	int t = 0;
	int l = 0;

	char leet[8][2] = {
		{'o', 'O'},
		{'l', 'L'},
		{'2', '2'},
		{'e', 'E'},
		{'a', 'A'},
		{'5', '5'},
		{'6', '6'},
		{'t', 'T'}
	}; // a = A + 32;

	while (text[i] != '\0')
	{
		//while not the end of comparisons
		//	set some value, a pointer ??
		//	set an index ?? 
		//if some value set 
		//	operate ??
		//	use an index to properly operate ?

		if (
		text[i] == 'a' || 
		text[i] == 'A' ||
		text[i] == 'e' || 
		text[i] == 'E' ||
		text[i] == 'o' ||
		text[i] == 'O' ||
		text[i] == 't' ||
		text[i] == 'T' ||
		text[i] == 'l' ||
		text[i] == 'L'
		)
		{

		}
		i++;
	}

	return (text);
}
