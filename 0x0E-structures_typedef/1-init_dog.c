#include "dog.h"
/**
 * init_dog - passage point
 * @d: pointer
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 * Return: Always 0
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
