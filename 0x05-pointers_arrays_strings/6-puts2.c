#include "main.h"

/**
 * puts2 - prints every other number
 * @str: parameter
 *
 * Return: void
 */
void puts2(char *str)
{
int d = 0;

for (d = 0; str[d] != '\0'; d++)
{
_putchar(str[d]);
d++;
}
_putchar('\n');
}
