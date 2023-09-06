#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * str_concat - Entry point
 *
 * Description: 'the program's description'
 * @s1: describe the parameter
 * @s2: the string that should be added to the first one
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	l = i + j;
	concat = malloc((l * sizeof(char)) + 1);
	if (concat == NULL)
		return (NULL);
	j = 0;
	while (k < l)
	{
		if (k <= i)
		{
			concat[k] = s1[k];
		}
		if (k >= i)
		{
			concat[k] = s2[j];
			j++;
		}
		k++;
	}
	concat[k] = '\0';
	return (concat);
}
