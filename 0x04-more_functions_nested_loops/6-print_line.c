#include "main.h"

/**
 * print_line - draws straight line in terminal
 * @n: number of times _ should be printed
 *
 * Retrun: void
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else 
{
int m;

for (m = 1; m <= n; m++)
{
_putchar('_');
}
_putchar('\n');
}
}
