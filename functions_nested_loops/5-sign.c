#include "main.h"

/**
 * print_sign - Main fuction
 *
 * @n: verification letter
 *
 * Return: -1 (negative), 1 (positive), 0 (zero)
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
