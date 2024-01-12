#include <stdio.h>
#include "main.h"
	/**
	 * _sqrt_recursion - Returns the natural square root of a number
	 * Description: returns the root of a number
	 *
	 * @m : number to calculate the root for
	 * Return: the natural square root
	 */
	int _sqrt_recursion(int n)
	{
		return (_sqrt(n, 1));
	}
	/**
	 * _sqrt - calculates natural square root
	 * Description: the root
	 * @n: number to calculate the square root
	 * Return: the natural square root
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

