#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char a;
char b;
for (b = 0; b <= 9; b++)
{
for (a = 'a' ; a <= 'z' ; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
