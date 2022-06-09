#include "main.h"

/**
 *print_diagonal - function that draws a diagonal line on the terminal.
 * followed by a new line.
 *@n:int
 *Return: void
 */

void print_diagonal(int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		int j = 0;

		for (; j < i; j++)
		_putchar(' ');
			_putchar('\\');
			_putchar('\n');
	}
	if (i <= 0)
	_putchar('\n');
}
