#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to the struct dog
 * @name: pointer to the variable name
 * @age: of float value
 * @owner: pointer to the owner's name
 *
 * Description: a function that initialize a variable
 * of type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name != NULL && owner != NULL && age > 0 && d != NULL)
	{
		(*d).name = name;
		(*d).owner = owner;
		(*d).age = age;
	}
}
