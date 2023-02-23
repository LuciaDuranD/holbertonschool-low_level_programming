#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;
	int last;

srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;


printf("Last digit of %i is %i", n, last);

if (last > 5)
{
printf("grater than 5\n");
}
else if (last < 6 && last !=0)
{
printf("is less than 6 and is not 0\n");
}
else
{
printf("is 0\n");
}
return (0);
}
