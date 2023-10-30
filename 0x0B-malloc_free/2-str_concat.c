#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - The function that returns the combined string
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: The concatenated string s
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, j = 0;

	if (s1 != NULL)
		i = strlen(s1);
	if (s2 != NULL)
		j = strlen(s2);

	s = (char *)malloc(sizeof(*s) * (i + j + 1));
	
	if (s == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		strcpy(s, s1);
	} else
	{
		s[0] = '\0';
	}
	if (s2 != NULL)
		strcat(s, s2);

	return (s);
}
