#include "main.h"

/**
 * print_chessboard - print formated layout of a given chessboard state
 * @sb: a chessboard state
 *
 * Return: void
 */
void print_chessboard(char (*sb)[8])
{
	int length = 8;
	int row;
	int collumn;
	char square;

	for (row = 0; row < length; row++)
	{
		for (collumn = 0; collumn < length; collumn++)
		{
			square = sb[row][collumn];
			_putchar(square);
		}
		_putchar('\n');
	}
}
