#include "main.h"
#include <stdio.h>

/**
 * print_number - function to print integer unconventionally
 *
 * @n: integer passed
 *
 * Return: None
 */

void print_number(int n)
{
	int divisor;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	divisor = 1;
	while (n / divisor >= 10)
	{
		divisor *= 10;

	}
	while (divisor > 0)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
	}
}
