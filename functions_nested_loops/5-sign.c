#include "main.h"

/**
 *print_sign - prints sign of a number entered.
 *@n: is a variable for a parameter of the above function.
 *Return: The end of the function.
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
return (0);
}
