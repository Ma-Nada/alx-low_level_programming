#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - Entry point
 *   * 
 *    * Description: 'the program's description'
 *     * @n: describe the parameter
 *      * 
 *       * Return: Always 0 (Success)
 *        */
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

