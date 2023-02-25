#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line.
 *
 * @n: prints all natural numbers from n
 *
 */

void print_to_98(int n)
{
int b;
for (b = n; b < 98; b++)
printf("%b, ", b);
for (b = n; b > 98; b--)
printf("%b, ", b);
printf("98\n");
}
