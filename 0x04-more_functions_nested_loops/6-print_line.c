#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times to print '_'.
 *
 * Return: void
 */
void print_line(int n)
{
	int co;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
