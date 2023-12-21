#include "main.h"

/**
 * print_square - Prints a square, followed by a new line.
 * @size: Size of both width and length of the square.
 *
 * Return: Nothing.
 */
void print_square(int size)
{
	int co, ro;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= size; co++)
		{
			_putchar('#');
			for (ro = 2; ro <= size; ro++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
