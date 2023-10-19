#include <ctype.h>
#include <stdio.h>

/*
 * is_digit - checks if a character is a digit
 *
 * @c: the character to check
 *
 * Return: 1 if `c` is a digit, 0 otherwise
 */

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/*
 * _atoi - converts a string to an integer
 *
 * @s: the input string
 *
 * Return: the integer value of the string
 */

int _atoi(char *s)
{
	int result = 0;
	int i = 0;

	while (!is_digit(s[i]) && s[i] != '\0')
	{
		i++;
	}

	while (is_digit(s[i]))
	{
		result = result * 10 + (s[i] - '\0');
		i++;
	}

	return (result);
}
