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
	char *concat = strcat(dest, src);

	return (concat);
}