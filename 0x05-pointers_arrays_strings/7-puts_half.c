#include <stdio.h>
#include <string.h>

/**
 * puts_half - Print every other character of a string
 *
 * This function takes a string `str` and prints every other
 * character, starting with the middle character, followed by a new line.
 *
 * @str: Pointer to the string to be processed
 *
 * Return: None
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);
	int start = (len + 1) / 2;

	for (i = start; i < len; i++)
	{
		printf("%c", str[i]);

	}
	printf("\n");
}
