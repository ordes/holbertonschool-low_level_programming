#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This function is the entry point for the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char digit;

	for (digit = 'z'; digit >= 'a'; digit--)
	{
		putchar(digit);
	}

	putchar('\n');

	return (0);
}
