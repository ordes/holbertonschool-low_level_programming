#include "main.h"
/**
* print_alphabet_x10 - print alphabet in lowercase 10 times
*
*/
void print_alphabet_x10(void)
{
int i;
char letter;
for (i = 1; i <= 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
}
