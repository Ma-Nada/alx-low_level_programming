#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcat - Entry point
 *
 * Description: 'the program's description'
 * @src: describe the parameter
 * @dest: description
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p);
}
