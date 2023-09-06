#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * alloc_grid - Entry point
 *
 * Description: 'the program's description'
 * @width: describe the parameter
 * @height: height
 * Return: Always 0 (Success)
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
		for (j = i; j > 0; j--)
		{
			free(p[j]);
		}
		free(p);
		return (NULL);
	}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
