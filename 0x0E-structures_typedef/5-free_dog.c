#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs.
 * @d: struct dog.
 *
 * Return: nothing to  return.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
