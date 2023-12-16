#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of two different digits,
 *              in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2;

	/* Loop through all possible combinations of two digits */
	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			/* Add comma and space after each combination */
			if (digit1 == 8 && digit2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
