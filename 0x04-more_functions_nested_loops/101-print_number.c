#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: Input integer parameter.
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45); /* Print minus sign for negative numbers */
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10); /* Recursively print digits */
	}
	_putchar(i % 10 + '0'); /* Print the last digit */
}
