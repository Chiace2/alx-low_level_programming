#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base
 * @y: exponent
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	int power;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	power = (x * _pow_recursion(x, y - 1));
	return (power);
}
