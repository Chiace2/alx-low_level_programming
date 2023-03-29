#include "main.h"

/**
 * *leet - checks code to encode
 * @d: parameter to encode
 *
 * Return: encoded
 */
char *leet(char *d)
{
int i;
int j;

char b[] = "aAeEoOtTlL";
char c[] = "4433007711";

for (i = 0; d[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (d[i] == b[j])
d[i] = c[j];
}
}
return (d);
}
