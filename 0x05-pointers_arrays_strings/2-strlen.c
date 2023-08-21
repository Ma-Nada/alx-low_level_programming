#include "main.h"
/**
 * _strlen - Entry point
 *
 * Description: 'the program's description'
 * @s: describe the parameter
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int i = 0;
	char *k = s;

	while (*k++)
	{
		i++;
	}
	return (i);
}
