#include "main.h"
#include <stdio.h>

/**
 * factorial - function for the factorial of a number
 *
 * @n: the integer parsed
 *
 * Return: the recursive function of the factorial
 */


int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
