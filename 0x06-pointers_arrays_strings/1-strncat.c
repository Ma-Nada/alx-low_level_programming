#include "main.h"
/**
 * _strncat - Entry point
 *
 * Description: 'the program's description'
 * @dest: describe the parameter
 * @src: description
 * @n: description
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 1;
	char *p = dest;

	while (*dest != '\0')
		dest++;
       while (i <= n)
       {
*dest = *src;
i++;
dest++;
src++;
       }
       if (n == 0)
	       *dest = '\0';
       return (p);
}
