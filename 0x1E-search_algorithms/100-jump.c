#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 *               using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found or array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	int jump =  sqrt(size), prev = 0;

	if (array == NULL)
	{
		printf("Array is NULL\n");
		return (-1);
	}


	while (array[jump] < value && jump < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", jump, array[jump]);
		prev = jump;
		jump += sqrt(size);
		if (prev >= (int)size)
			return (-1);
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, jump);

	while (array[prev] < value && prev < jump)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev++;
	}

	if (array[prev] == value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		return (prev);
	}

	printf("Value not found in array\n");
	return (-1);
}
