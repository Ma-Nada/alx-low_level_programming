#include "main.h"
/**
 * factorial - calculate fact
 * @n: the fact of n
 * Return: n
 */
int factorial(int n)
{
	if (n <= 1)
		return (1);
	if (n <= 0)
		return (-1);
	return (n * factorial(n-1));
			}
