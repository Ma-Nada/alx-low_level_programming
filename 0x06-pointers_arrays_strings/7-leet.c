#include "main.h"
/**
 * leet - Entry point
 *
 * Description: 'the program's description'
 * @c: describe the parameter
 *
 * Return: Always 0 (Success)
 */
char *leet(char *c)
{
	int i = 0;
	while (c[i])
	{
		if ((c[i] == 'A') || (c[i] == 'a'))
			c[i] = 4;
		else if ((c[i] == 'e') || (c[i] == 'E'))
			c[i] = 3;
		else if ((c[i] == 'o') || (c[i] == 'O'))
			c[i] = 0;
		else if ((c[i] == 't') || (c[i] == 'T'))
			c[i] = 7;
		else if ((c[i] == '1') || (c[i] == 'L'))
			c[i] = 1;
		i++;
	}
	return (c);
}
