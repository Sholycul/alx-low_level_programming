#include <stdio.h>

/**
 * print_rev - Prints a string in reverse.
 *
 * This function takes a pointer to a string and prints
 * its characters in reverse order followed by a newline.
 *
 * @s: Pointer to the input string.
 *
 * Return: None.
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
