#include "main.h"
#include <stdlib.h>
/**
 * rev_string - Entry point
 *
 * Description: 'the program's description'
 * @s: describe the parameter
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int n = 0, i = 0;
	char tmp;

	while (s[i++])
		n++;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = s[i];
		s[i] = s[n - i - 1];
		s[n - 1 - i] = tmp;
	}
}
