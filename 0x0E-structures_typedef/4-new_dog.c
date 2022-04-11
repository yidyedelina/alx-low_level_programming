#include "dog.h"
#include "string.h"
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
	new->name = malloc(sizeof(name) + 1);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->owner = malloc(sizeof(owner) + 1);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	strcpy(new->name, name);
	strcpy(new->owner, owner);
	new->age = age;
	return (new);
}
