#include "main.h"

/**
 * print_last_digit - check the code.
 * @n: the input number as an integer.
 *
 * Description: checks last digit
 *
 * Return: l if true. -l if false
 */
int print_last_digit(int n)
{
int l;

l = n % 10;
if (l < 0)
{
_putchar(-l + 48);
return (-l);
}
else
{
_putchar(l + 48);
}
return (l);
}
