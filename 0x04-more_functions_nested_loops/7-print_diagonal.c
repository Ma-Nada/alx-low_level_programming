#include "main.h"
/**
 * print_diagonal - Entry point
 *
 * Description: 'the program's description'
 * @n: describe the parameter
 *
 * Return: Always 0 (Success)
*/
void print_diagonal(int n)
{
	int i;
	int j;

if (n <= 0)
{
	_putchar('\n');
}
else
{
	for (i = 0; i < n ; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
}
}
