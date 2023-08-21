#include "main.h"
/**
 * swap_int - Entry point
 *
 * Description: 'the program's description'
 * @a: describe the parameter
 * @b: parameter
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
