#include <stdio.h>

/**
 * main_2 - function to be executed before main
 * Return: no return.
 */

void __attribute__ ((constructor)) main_2()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
