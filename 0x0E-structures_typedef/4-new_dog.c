#include "dog.h"
/**
 * new_dog - a function that create a new instance of dog;
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: the adress of the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = (dog_t *)malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
