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
	char *r = strcat(dest, src);

	return (r);
}
