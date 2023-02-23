#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
* 
* Return: 0
*/
int main(void)
{
int n;
char last[] = "Last digit of";

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%s %d and is", last, n, n % 10);
if (n % 10 > 5)
{
 printf("grater than 5\n");
}
 else if (n % 10 == 0)
{
 printf("0/n");
}
 else
{
 printf("less than 6 which is not 0\n");
}
 return (0);
}
