#include "main.h"
/**
 * puts2 - Entry point
 *
 * Description: 'the program's description'
 * @str: describe the parameter
 *
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int j = 0, i = 0;

	while (str[j] != '\0');
	j++;
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
