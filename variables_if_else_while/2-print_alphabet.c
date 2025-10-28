#include <stdio.h>
/**
 *main - this is the beginning of the function
 *
 *Return: this is the end of the function
 */

int main(void)
{
const char *alphabet = "abcdefghijklmnopqrstuvwxyz";
while (*alphabet)
{
putchar(*alphabet++);
}
putchar('\n');
return (0);
}
