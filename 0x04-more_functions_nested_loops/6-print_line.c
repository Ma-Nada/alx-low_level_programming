#include "main.h"
/**
 *print_line - Entry point
 *
 * Description: 'the program's description'
 * @n: describe the parameter
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
