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
	char *p = dest;

	while (*dest != '\0')
		dest++;
       /*while (i <= n)
       {
*dest = *src;
i++;
dest++;
src++;
       }*/
	while (n--)
    {
        if (!(*dest++ = *s2++))
        {
            return s1;
        }
    }
       if (n == 0)
	       *dest = '\0';
       return (p);
}
