#include "main.h"
/**
 * _islower - Entry point
 *  Return: 0 or 1
 *  @c: the character to be checked
 *  description: c is a variable
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
