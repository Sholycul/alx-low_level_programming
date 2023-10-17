#include <stdio.h>

/*
 * print_rev - Prints a string in reverse.
 * @s: The input string
 *
 * Return: none.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	i++;

	for (i = i - 1; i >= 0; i--)
		putchar(s[i]);

	putchar('\n');
}
