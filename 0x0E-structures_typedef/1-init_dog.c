#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog init .
 * @d: pointer to struct type dog init
 * @name: pointer to  name's dog
 * @age: int age's dog
 * @owner: pointer to  owner's dog
 * Return: No.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
												}
}

