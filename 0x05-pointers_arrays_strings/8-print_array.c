#include <stdio.h>

/**
 * print_array - Prints elements of an integer array.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to print.
 *
 * This function prints the elements of the integer array a
 * up to n elements, separated by commas and followed by a space.
 * If it's the last element, no comma and space are added.
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("%d\n", a[1]);
		return;
	}
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		} else
		{
			printf("%d\n", a[i]);
		}

	}
}
