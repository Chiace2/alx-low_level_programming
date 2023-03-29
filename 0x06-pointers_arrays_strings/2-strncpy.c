#include "main.h"

/**
 * _strncpy - check code to copy two strings
 * @dest: Parameter A
 * @src: Parameter B
 * @n: number of bytes
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
