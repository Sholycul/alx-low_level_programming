#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Print integer numbers 0 - 9
*
* Return: 0 for success
*/
int main(void)
{
	int numbers;

	for (numbers = 0; numbers <= 9; numbers++)
		printf("%d", numbers);
	putchar('\n');
	return (0);
}
