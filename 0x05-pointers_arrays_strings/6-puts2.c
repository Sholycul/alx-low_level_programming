#include <stdio.h>
#include <string.h>

/**
 * puts2 - Reverse string in two
 *
 * This function takes in a string `str` and prints every
 * other character, starting with the first character.
 *
 * @str: Pointer to the string to be processed
 *
 * Return: None
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i += 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
