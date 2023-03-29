#include "main.h"

/**
 * reverse_array - check code to reverse array integers
 * @a: parameter a
 * @n:parameter b
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i;
int temp = 0;

for (i = 0; i < n--; i++)
{
temp = a[i];
a[i] = a[n];
a[n] = temp;
}
}
