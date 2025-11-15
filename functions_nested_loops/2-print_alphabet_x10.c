#include "main.h"

/**
 *print_alphabet_x10 - this is the nested loops function.
 *
 *Return: this is the termination part.
 */

void print_alphabet_x10(void)
{
int i;
char c;
for (i = 0; i <= 9; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
return;
}
