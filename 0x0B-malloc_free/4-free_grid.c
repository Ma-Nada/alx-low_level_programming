#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Entry point
 *
 * Description: 'the program's description'
 * @grid: describe the parameter
 * @height: description
 * Return: Always 0 (Success)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
				}
				free(grid);
				}
