#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: the new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	newdog->name = malloc(sizeof(char) * (strlen(name) + 1));

	if (newdog->owner == NULL || newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return(NULL);
	}
	newdog->name = strcpy(newdog->name, name);
	newdog->age = age;
	newdog->owner = strcpy(newdog->owner, owner);
	return (newdog);
}
