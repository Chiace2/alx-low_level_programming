#include "main.h"

/**
 * _islower - print 1 lowercase characters. other cases 0
 * @c: The character to print
 *
 * Return: 1 for lowercase characters. 0 others
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
