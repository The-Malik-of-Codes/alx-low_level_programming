#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	int first = 0, second = 0, third;
	dog_t *_doge;

	while (name[first] != '\0')
		first++;
	while (owner[second] != '\0')
		second++;
	_doge = malloc(sizeof(dog_t));
	if (_doge == NULL)
	{
		free(_doge);
		return (NULL);
	}
	_doge->name = malloc(first * sizeof(_doge->name));
	if (_doge->name == NULL)
	{
		free(_doge->name);
		free(_doge);
		return (NULL);
	}
	for (third = 0; third <= first; third++)
		_doge->name[third] = name[third];
	_doge->age = age;
	_doge->owner = malloc(second * sizeof(_doge->owner));
	if (_doge->owner == NULL)
	{
		free(_doge->owner);
		free(_doge->name);
		free(_doge);
		return (NULL);
	}
	for (third = 0; third <= second; third++)
		_doge->owner[third] = owner[third];
	return (_doge);
}

