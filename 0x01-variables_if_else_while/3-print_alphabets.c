#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Print alphabet with capital letters
* Return: 0 for success
*/
int main(void)
{
	char lowerCase;
	char upperCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
		putchar(lowerCase);
	for (upperCase = 'A'; upperCase <= 'Z'; upperCase++)
		putchar(upperCase);
	putchar('\n');
	return (0);
}
