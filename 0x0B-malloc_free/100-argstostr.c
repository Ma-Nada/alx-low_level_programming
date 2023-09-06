#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * argstostr - Entry point
 *
 * Description: 'the program's description'
 * @ac: describe the parameter
 * @av: characters to be concatenated
 * Return: Always 0 (Success)
 */
char *argstostr(int ac, char **av)
{
	if ((ac == 0) || (av == 0))
		return (NULL);
	
