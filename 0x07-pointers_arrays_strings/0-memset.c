#include "main.h"
/**
 * _memset - Entry point
 * Description: 'the program's description'
 * @s: describe the parameter
 * @b: description
 * @n: description
 * * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
