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
	int ch;

	if (c >= 0)
		_putchar(c);
	else
	{
		ch = c * -1;
	_putchar(ch);
}
return (0);
}
