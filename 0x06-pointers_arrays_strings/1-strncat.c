#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: parameter A
 * @src: parameter B
 * @n: bytes from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int destlen = 0;
int srclen = 0;

while (dest[destlen] != '\0')
{
destlen++;
}
while (srclen < n && src[srclen] != '\0')
{
dest[destlen] = src[srclen];
destlen++;
srclen++;
}
dest[destlen] = '\0';
return (dest);
}
