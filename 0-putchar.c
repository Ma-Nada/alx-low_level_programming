#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 * @parameter: describe the parameter
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *c="_putchar";
	int _putchar(char c)
{
	return (write(1, &c, 8));
}
return (0);
}
