#include "main.h"
/**
 * _puts - Entry point
 *
 * Description: 'the program's description'
 * @str: describe the parameter
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int n = 0;
	char *k = str;
	char *pt = str;

	while (*k++)
	{
		n++;
	}
	for (pt = str; pt < str + n; pt++)
	{
		_putchar(*pt);
	}
	_putchar('\n');
}
