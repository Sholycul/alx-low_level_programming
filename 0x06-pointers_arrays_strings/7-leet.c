#include <stdio.h>

/**
 * leet - Write a function that encodes a string into 1337
 *
 * @changed: This is the input string
 *
 * Return: String converted to 1337
 */

char *leet(char *changed)
{
	int index, i;
	char minus[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char shola[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char numbers[] = {'4', '3', '0', '7', '1', '\0'};

	for (index = 0; changed[index] != '\0'; ++index)
	{
		for (i = 0; i < 5; i++)
		{
			if (changed[index] == minus[i] || changed[index] == shola[i])
			{
				changed[index] = numbers[i];
			}
		}
	}
	return (changed);
}
