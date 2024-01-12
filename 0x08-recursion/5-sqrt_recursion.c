#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - find natural root
 * Description: find the root of a number with a recursive functions
 * @n: the number
 * Return: the int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - find the root
 * Description: root of a number
 * @n: the number to find the root for
 * @i: iterator
 * Return: the root of the number
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}

