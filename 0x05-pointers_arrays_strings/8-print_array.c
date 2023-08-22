#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point
 *
 * Description: 'the program's description'
 * @a: describe the parameter
 * @b: describe
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
