#include "main.h"

/**
 * main - Entry point
 * Description: Finds and prints the sum of even-valued terms in the Fibonacci
 * sequence, up to a limit of 4,000,000.
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int j = 1;
	unsigned long int k = 2;
	unsigned long int next;
	unsigned long int sum = 0;

	while (j <= 4000000)
	{
		if ((j % 2) == 0)
			sum += j;
		next = j + k;
		j = k;
		k = next;
	}

	_putchar(sum / 1000000 + '0');
	_putchar((sum % 1000000) / 100000 + '0');
	_putchar((sum % 100000) / 10000 + '0');
	_putchar((sum % 10000) / 1000 + '0');
	_putchar((sum % 1000) / 100 + '0');
	_putchar((sum % 100) / 10 + '0');
	_putchar(sum % 10 + '0');
	_putchar('\n');

	return (0);
}
