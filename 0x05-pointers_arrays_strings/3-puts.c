#include "main.h"
#include <string.h>

/**
 * _puts - checks code
 * @str: string value
 *
 * Return: void
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
