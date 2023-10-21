#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Print number from 0 to 9 without using char
*
* Return: 0 for success
*/
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	putchar('\n');
	return (0);
}
