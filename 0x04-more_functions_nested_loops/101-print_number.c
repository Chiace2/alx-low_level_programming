#include "main.h"
#include <stdio.h>

/**
 * print_number - prints integer with putchar
 * @n: takes number, hello
 *
 * Return: void
 */
void print_number(int n)
{
unsigned int m;

if (n < 0)
{
m = -n;
_putchar('-');
}
else
{
m = n;
}
if (m / 10 != 0)
print_number(m / 10);
_putchar((m % 10) + '0');
}

