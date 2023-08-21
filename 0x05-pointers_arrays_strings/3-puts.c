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
	for (; *str =! '\0'; str++)
		_putchar(str);
	_putchar('\n');
}
