#include "main.h"
/**
 * _isupper - Entry point
 *
 * Description: 'the program's description'
 * @c: describe the parameter
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
