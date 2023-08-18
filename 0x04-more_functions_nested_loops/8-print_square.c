#include "main.h"
/**
 * print_square - Entry point
 *
 * Description: 'the program's description'
 * @size: describe the parameter
 *
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (size <= 0)
				_putchar('\n');
			else
			_putchar('#');
		}
		_putchar('\n');
	}
}
