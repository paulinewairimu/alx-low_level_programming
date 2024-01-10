#include "main.h"
/**
 * factorial - Calculate the factorial of a number
 * @p: the number to calculate the factorial
 *
 * Return: integer value
 */
int factorial(int p)
{
	if (p < 0)
		return (-1);
	if (p <= 1)
		return (1);
	return (p * factorial(p - 1));
}
