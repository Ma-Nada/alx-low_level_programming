#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - pow of x by Y
 * @x: pow x
 * @y: by y
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion( x, y - 1));
}
