#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: input1
 * @name: input2
 * @age: input3
 * @owner: input4
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
