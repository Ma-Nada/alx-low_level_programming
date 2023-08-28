#include "main.h"
/**
 * _strspn - Entry point
 *
 * Description: 'the program's description'
 * @s: describe the parameter
 * @accept: description
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, value = 0, check = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				value++;
				check = 1;
			}
		}
		if (check == 0)
			return (value);
	}
	return (0);
}
