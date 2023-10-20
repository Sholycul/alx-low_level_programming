#include <stdio.h>

/**
 * cap_string - Write a function that capitalizes all words of a string.
 *
 * @entry: This is the input string
 *
 * Return: String capitalized
 */
char *cap_string(char *entry)
{
	int convert, index, count;

	char chars[] = {' ', ',', ';', '.', '!',
			 '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};
	convert = 32;

	for (index = 0; entry[index] != '\0'; index++)
	{
		if (entry[index] >= 'a' && entry[index] <= 'z')
		{
			entry[index] =  entry[index] - convert;
		}
		convert = 0;
		for (count = 0; chars[count] != '\0'; count++)
		{
			if (chars[count] == entry[index])
			{
				convert = 32;
				break;
			}
		}
	}
	return (entry);
}
