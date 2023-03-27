#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
int a = 0;
int len;
len = 0;

for (a = 0; str[a] != '\0'; a++)
len++;

if ((len % 2) == 0)
{
for (a = (len / 2); str[a] != '\0'; a++)
_putchar(str[a]);
}
else
if ((len % 2) != 2)
{
for (a = (len - 1) / 2; str[a] != '\0'; a++)
_putchar(str[a]);
}
_putchar('\n');
}
