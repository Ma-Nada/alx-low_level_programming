#include "main.h"
/**
 * print_numbers - Entry point
 *
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
