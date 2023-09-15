#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Entry point
 *
 * Description: 'the program's description'
 * @name: describe the parameter
 * @f: description
 * Return: Always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
