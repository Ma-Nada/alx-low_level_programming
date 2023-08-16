#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	for (l = 0; l <= 5; l++)
	{
		for (k = 0; k <= 9; k++)
		{
			for (j = 0; j <= 5 ; j++)
			{
				for (i = 0; i <= 9; i++)
				{
					_putchar(l + '0');
					_putchar(k + '0');
					_putchar(':');
					_putchar(j + '0');
					_putchar(i + '0');
					_putchar('\n');
				}
			}
		}
	}
}
