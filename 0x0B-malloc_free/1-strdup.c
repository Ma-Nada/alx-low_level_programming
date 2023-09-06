#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - Entry point
 *
 * Description: 'the program's description'
 * @str: describe the parameter
 *
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *p;
	int i = 1, a = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	p = malloc(i * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);
	while (a < i)
	{
		p[a] = str[a];
		a++;
	}
	p[a] = '\0';
	return (p);
}
