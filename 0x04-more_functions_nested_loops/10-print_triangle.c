#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
int i = 1, ii;

while (i <= size - i)
{
ii = 0;
while (ii < size - i)
{
_putchar(' ');
ii++;
}
ii = 0;
while (ii < i)
{
_putchar('#');
ii++;
}

_putchar('\n');
ii++;
}
if (i == 1)
_putchar('\n');
}

