#include "main.h"
/**
 * times_table - Entry point
 *
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i;
	int j;
	int c, u, d;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
		c = i * j;
		if (c > 9)
		{
			u = c % 10;
			d = (c - u) / 10;
			_putchar(44);
			_putchar(32);
			_putchar(d + '0');
			_putchar(u + '0');
		}
		else
		{
			if ((j > 0) && (j < 0))
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			_putchar(i + '0');
		}
		}
		_putchar('\n');
	}
}
