#include <stdio.h>

/**
 *main - this is the beginning of our function
 *Return: This is the end of our function
 */

int main(void)
{
char *tebalphla = "zyxwvutsrqponmlkjihgfedcba";

while (*tebalphla)
{
putchar(*tebalphla++);
}
putchar('\n');
return (0);
}
