#include "main.h"

/**
 * print_square - prints a square
 * @size: the integer of the size of square
 *
 * Return: void
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int k, j;

for (k = 0; k <= size; k++)
{
for (j = 0; j <= k; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
