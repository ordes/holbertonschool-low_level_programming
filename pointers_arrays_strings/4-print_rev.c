#include "main.h"

/**
* print_rev - prints string in reverse
* @s: - point to respective string
*/

void print_rev(char *s)
{
	int i;
	int last_index;

	for (i = 0; s[i] != '\0'; i++)
	{
		last_index = i;
	}

	for (i = last_index; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
