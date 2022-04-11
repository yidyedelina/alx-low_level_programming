#include "dog.h"
/**
 * free_dog - free the memory of free dog;
 * @d: the address of the dog struct
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
