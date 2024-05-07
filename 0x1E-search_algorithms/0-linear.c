#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: array of ints
 * @size: size of array
 * @value: value to search for
 * Return: position or -1 if not found
 *
 */

int linear_search(int *array, size_t size, int value)
 {
     size_t i;
     for (i = 0; i <= size - 1; i++)
     {
         if (array[i] == value && i <= (size - 1))
         {
             printf("Value checked array[%ld] = [%d]\n", i, array[i]);
             return (i);
             break;
         }
         else if (array[i] != value && i > (size - 1))
         {
             return (-1);
         }
         else
         {
             printf("Value checked array[%ld] = [%d]\n", i, array[i]);
         }
     }
     return (-1);
 }
