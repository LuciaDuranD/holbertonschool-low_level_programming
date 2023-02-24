#include "main.h"

/**
 * _islower - Entry point
 *
 * @c: verification letter
 *
 * Return: 0 (No lowercase), 1 (lowercase)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
