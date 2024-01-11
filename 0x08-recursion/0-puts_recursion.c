#include <stdio.h>
#include "main.h"
/*_puts_recursion - print a string
 * s: the string to print
 * return: nothing
 */
void _puts_recursion(char *s)
{
	while (*s != "\0")
		printf("%s",s);
	printf("\n");
}
