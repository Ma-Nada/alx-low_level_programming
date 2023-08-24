#include "main.h"
/**
 * _strncpy - Entry point
 * 
 * Description: 'the program's description'
 * @dest: describe the parameter
 * @src: description
 * @n: description
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	while(*dest != '\0')
		dest++;
	while(n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (p);
}
