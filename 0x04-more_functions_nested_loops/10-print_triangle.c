#include "main.h"

/**
 * print_triangle - Prints a triangle using '#' characters
 * @size: Size of the triangle to be printed
 *
 * Return: void
 */
void print_triangle(int size)
{
	int sp, ro, tr;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ro = 0; ro < size; ro++)
		{
			for (sp = 0; sp < size - 1 - ro; sp++)
			{
				_putchar(' ');
			}
			for (tr = 0; tr <= ro; tr++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
