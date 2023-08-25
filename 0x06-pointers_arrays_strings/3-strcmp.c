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
	while (*s1 && *s2 && (*s2 == *s1))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
