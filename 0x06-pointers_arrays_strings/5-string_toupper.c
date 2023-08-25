#include "main.h"
/**
 * string_toupper - Entry point
 *
 * Description: 'the program's description'
 * @c: describe the parameter
 *
 * Return: Always 0 (Success)
 */
char *string_toupper(char *c)
{
	char cmp;

while (*c != '\0')
{
if ((*c >= 97) && (*c <= 122))
{
	cmp = *c - 32;
	*c = cmp;
}
c++;
}
return (c);
}
