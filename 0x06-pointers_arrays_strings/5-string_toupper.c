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
	int i = 0;

	while (c[i] != '\0')
{
if ((c[i] >= 97) && (c[i] <= 122))
{
	c[i] = c[i] - 32;
}
i++;
}
return (c);
}
