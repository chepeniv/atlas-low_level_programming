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
	int t;
	int l;
	char leet[] = {'O', 'L', '\0', 'E', 'A', '\0', '\0', 'T'}; 

	t = 0;
	while (text[t] != '\0')
	{
		l = 0;
		while (l < 8)
		{
			if (text[t] == leet[l] || text[t] == leet[l] + 32)
			{
				text[t] = l + '0';
				break;
			}
			l++;
		}
		t++;
	}

	return (text);
}
