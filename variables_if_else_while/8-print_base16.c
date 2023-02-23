#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char a;
char n;
for (a = '0'; a <= '9'; a++)
putchar(a);
for (n = 'n'; n <= 'f'; n++)
putchar(n);
putchar('\n');
return (0);
}
