#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: the variable
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int s, i;

	s = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		s <<= 1;
		if (b[i] == '1')
			s += 1;
	}
	return (s);
}
