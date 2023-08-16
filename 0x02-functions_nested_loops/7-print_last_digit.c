#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * Description: 'the program's description'
 * @c: describe the parameter
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
	int ch;

	ch = c % 10;
	if (c < 0)
	{
		ch = ch * -1;
}
_putchar(ch + '0');
	return (ch);
}
