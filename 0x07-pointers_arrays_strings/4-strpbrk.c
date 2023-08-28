#include "main.h"
/**
 * _strpbrk - Entry point
 *
 * Description: 'the program's description'
 * @s: describe the parameter
 * @accept: description
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
