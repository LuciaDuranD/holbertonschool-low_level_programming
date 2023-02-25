#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line.
 *
 * @n: prints all natural numbers from n
 *
 * Return: none
 */

void print_to_98(int n)
{
int a;
for (a =n; a < 98; a++)
for (a =n; a > 98; a--)
printf("%a, ", a);
printf("98\n");
}
