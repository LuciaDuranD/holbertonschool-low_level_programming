#include "main.h"

/**
 * Print_sign - Entry point
 *
 * @c: verification letter
 *
 * Return: -1 (negative), 0 (zero), 1 (positive) 
 */
int print_sign(int n)
{
else if (n > 0)
{
_putchar('+');
return (1);
}
if (n < 0)
{
_putchar('-');
return (1);
}
else 
{
_putchar('0');
return (0);
}
}
