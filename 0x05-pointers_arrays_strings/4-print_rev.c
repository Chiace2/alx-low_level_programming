#include "main.h"

/**
 * print_rev - checks code to print in reverse
 * @s: strings to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
int rever = 0;
int m;

while (*s != '\0')
{
rever++;
s++;
}
s--;
for (m = rever; m > 0; m--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}

