#include "main.h"
/**
 * print_rev - Entry point
 *
 * Description: 'the program's description'
 * @s: describe the parameter
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	char *pt;
	int n = 0;
	char *k = s;

	while (*k++)
		n++;
	for (pt = s + n - 1; pt >= s; pt--)
	{
		_putchar(*pt);
	}
	_putchar('\n');
}
