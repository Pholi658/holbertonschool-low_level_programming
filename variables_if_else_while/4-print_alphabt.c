#include <stdio.h>
/**
 *main - this is the beginning of our function
 *
 *Return: This the end of our function
 */

int main(void)
{
char *alphabt = "abcdfghijklmnoprstuvwxyz";

while (*alphabt)
{
putchar(*alphabt++);
}
putchar('\n');
return (0);
}
