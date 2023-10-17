#include <stdio.h>
#include <string.h>

/*
 * puts2: function to reverse string
 *
 * this function take in string s and reverses it in two
 *
 *
 *
 * Return: none
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
