#include <stdio.h>
#include <string.h>

/**
 * _strcat - Function that returns the concatenated string
 *
 * @*dest: first parameter
 * @src: second parameter
 *
 * Return: concat
 *
 *
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
