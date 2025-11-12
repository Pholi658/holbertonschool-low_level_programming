#include "main.h"

/**
 *_islower - checks whether a char is lower or uppercase.
 *@c: variable for the parameter.
 *Return: gives back number between 0 and 1.
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
