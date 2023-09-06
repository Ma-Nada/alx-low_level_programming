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
	int i = 0, j = 0, k = 0, l = 0, add;

	while (s1[l])
		l++;
	while (s2[k])
		k++;
	add = l + k + 1;
	if ((s2 == NULL) && (s1 == NULL))
		return (NULL);
	else if (s1 == NULL)
		return (s2);
	else
		return (s1);
	concat = malloc(add * sizeof(char));
	if (concat == NULL)
		return (NULL);
	while (s1[i])
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		concat[i] = s2[j];
		i++;
		j++;
	}
	concat[i] = '\0';
	return (concat);
}
