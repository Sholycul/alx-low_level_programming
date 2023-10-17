#include <stdio.h>
#include <string.h>

/**
 * puts2 - Print every other character of a string
 *
 * This function takes a string `str` and prints every other
 * character, starting with the first character, followed by a new line.
 *
 * @str: Pointer to the string to be processed
 *
 * Return: None
 */
void puts_half(char *str)
{
	int i;
	int n = ((strlen(str) - 1)/2);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i >= n)
		{ 
			putchar(str[i + 1]);
		}
	}

	putchar('\n');
}
