#include "main.h"

/**
 * _puts_recursion - Print a string followed by a new line
 * @j: the string to print
 *
 * Return: Nothing.
 */
void _puts_recursion(char *j)
{

	if (*j == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*j);
	j++;
	_puts_recursion(j);
}
