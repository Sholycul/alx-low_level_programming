#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Print alphabet backwards
*
* Return: 0 for success
*/
int main(void)
{
	char lCase;

	for (lCase = 'z'; lCase >= 'a'; lCase--)
		putchar(lCase);

	putchar('\n');

	return (0);
}
