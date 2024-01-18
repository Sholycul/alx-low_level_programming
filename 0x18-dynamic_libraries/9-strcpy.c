#include "main.h"

/**
 * _strcpy - Copies the started
 * @dest: The destination
 *
 * @src: where we copy from
 *
 *
 *
 * Return: Start
 *
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
			dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
