#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: verification letter
 *
 * Return: 0 (No lowercase), 1 (lowercase)
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
