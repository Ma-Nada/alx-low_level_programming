#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j <= 9)
			_putchar(j + '0');
			else
				_putchar(j);
		}
	}
}
