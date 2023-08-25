#include "main.h"
/**
 * _strcmp - Entry point
 *
 * Description: 'the program's description'
 * @s1: describe the parameter
 * @s2: description
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s2 != '\0'))
	{
		if (*s1 > *s2)
			return (15);
		else if (*s1 < *s2)
			return (-15);
		s1++;
		s2++;
	}
	return (0);
}
