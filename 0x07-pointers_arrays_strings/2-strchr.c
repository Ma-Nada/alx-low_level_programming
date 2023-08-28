#include "main.h"
/**
 * _strchr - Entry point
 *
 * Description: 'the program's description'
 * @s: describe the parameter
 * @c: description
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
		}
		return (0);
		}
