#include <stdio.h>
/**
 *main - the beginning of the function
 *
 *Return: the end the end of the function
 */
int main(void)
{
char *alphABETS = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

while (*alphABETS)
{
putchar(*alphABETS++);
}
putchar('\n');
return (0);
}
