#include "main.h"

/**
 * Print_sign - Main fuction
 *
 * @c: verification letter
 *
 * Return: -1 (negative), 1 (positive), 0 (zero) 
 */
int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('0');
return (0);
}
}
