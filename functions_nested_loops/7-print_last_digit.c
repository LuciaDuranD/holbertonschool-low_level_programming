#include "main.h"

/**
 * print_last_digit - main fuction
 *
 * @n: to print absolute value
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
_putchar('0' + _abs(n % 10));
return (_abs(n % 10));
}
