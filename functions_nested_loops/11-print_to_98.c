#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by new line.
 * @n: input number to check
 */

void print_to_98(int n)
{
int i;
for (i = n; i < 98; i++)
printf("%i, ", i);
for (i = n; i > 98; i--)
printf("%i, ", i);
printf("98\n");
}
