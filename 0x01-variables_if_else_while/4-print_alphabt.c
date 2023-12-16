#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Prints the alphabet in lowercase,
 * excluding the letters 'e' and 'q'.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
