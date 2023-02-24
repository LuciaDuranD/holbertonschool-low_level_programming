#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: verification letter
 *
 * Return: -1 (negative), 0 (zero), 1 (positive) 
 */
int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else 
{
_putchar('0');
return (0);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
}
