#include "main.h"
/**
 * _strcpy - Entry point
 *
 * Description: 'the program's description'
 * @dest: describe the parameter
 * @src: describe
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
