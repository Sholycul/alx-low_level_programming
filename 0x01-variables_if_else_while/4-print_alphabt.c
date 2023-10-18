#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Print alphabet with capital letters
* Return: 0 for success
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
