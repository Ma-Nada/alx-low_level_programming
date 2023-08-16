#include "main.h"
/**
 * _abs - Entry point
 *
 * Description: 'the program's description'
 * @c: describe the parameter
 *
 * Return: Always 0 (Success)
 */
int _abs(int c)
{
	if (c >= 0)
		_putchar(c);
	else
	{
		c = 0 - c;
	_putchar(c);
}
return (0);
}
