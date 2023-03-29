#include "main.h"

/**
 * _strcmp - check code to compare two strings
 * @s1: parameter 1
 * @s2: parameter 2
 *
 * Return: comparisons
 */
int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) 
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}
return (0);
}
