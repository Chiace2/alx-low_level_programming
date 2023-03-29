#include "main.h"

/**
 * *string_toupper - checks code to change cases
 * @d: parameter
 *
 * Return: cases
 */
char *string_toupper(char *d)
{
int i;

for (i = 0; d[i] != '\0'; i++)
{
if (d[i] >= 'a' && i <= 'z')
{
d[i] = d[i] - 32;
}
}
return (d);
}
