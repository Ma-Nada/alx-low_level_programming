#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Entry point
 *
 * Description: 'the program's description'
 * @n: describe the parameter
 * @a: description
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
