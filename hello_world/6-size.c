#include <stdio.h>
/**
* main - prints the byte size
* Description: byte size
* Return: 0
*/
int main(void)
{
int a;
long int s;
long long int d;
char f;
float g;

printf("Size of a char: %1d byte(s)\n", sizeof(f));
printf("Size of an int: %1d byte(s)\n", sizeof(a));
printf("Size of a long int: %1d byte(s)\n", sizeof(s));
printf("Size of a long long int: %1d byte(s)\n", sizeof(d));
printf("Size of a float: %1d byte(s)\n", sizeof(g));
return (0);
}
