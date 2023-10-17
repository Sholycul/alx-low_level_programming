#include <string.h>

/**
 * rev_string - function to reverse string
 * The function takes the length of the string and display
 * the content in a last in first out order
 * @s: variable to be reversed
 *
 * Return - none.
 */


void rev_string(char *s)
{
	int i, j;
	char temp;

	j = strlen(s) - 1;

	for (i = 0; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
