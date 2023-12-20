#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0'); /* Print the first digit */

		for (column = 1; column <= 9; column++)
		{
			_putchar(','); /* Print the comma separator */
			_putchar(' ');

			product = row * column;

			/* Print the tens digit */
			if (product >= 10)
				_putchar(product / 10 + '0');
			else
				_putchar(' ');

			/* Print the ones digit */
			_putchar(product % 10 + '0');
		}

		_putchar('\n'); /* Move to the next line */
	}
}
