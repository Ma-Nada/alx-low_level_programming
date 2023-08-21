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
	char *k = str;

	while (*k++)
		_putchar(*k);
	_putchar('\n');
}
