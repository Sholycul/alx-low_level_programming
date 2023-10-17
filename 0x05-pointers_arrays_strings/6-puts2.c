#include <stdio.h>

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

void puts2(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		printf("%c", *ptr);
		ptr += 2;
	}
	printf("\n");
}
