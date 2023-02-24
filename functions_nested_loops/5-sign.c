#include "main.h"

/**
 * Print_sign - Main fuction
 *
 * @n: verification letter
 *
 * Return: -1 if negative, 1 if positive, 0 if zero 
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
_putchar('-');
return (-1);
}
}
