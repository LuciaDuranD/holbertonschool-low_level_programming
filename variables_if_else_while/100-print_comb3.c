#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a;
int n;
for (a = 10; a <= 19; a++)
{
for (n = 10; n <= 19; n++)
{
if (a != n && a < n)
{
putchar((a % 10) + '0');
putchar((n % 10) + '0');
if (a != 18 || n != 19)
{
putchar(' ');
putchar(',');
}
}
}
}
putchar('\n');
return (0);
}
