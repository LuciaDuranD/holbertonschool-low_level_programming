#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a;
int b;
int c;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
for (c = 0; c < 10; c++)
{
if ((a != b && b != c) && (a < b && b < c))
{
putchar((a % 10) + '0');
putchar((b % 10) + '0');
putchar((c % 10) + '0');
if (a != 7 || b != 8 || c != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
