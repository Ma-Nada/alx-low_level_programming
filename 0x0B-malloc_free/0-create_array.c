#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - Entry point
 *
 * Description: 'the program's description'
 * @size: describe the parameter
 * @c: character that needs to be filled in the array
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size ; i++)
	{
		array[i] = c;
	}
return (array);
}
