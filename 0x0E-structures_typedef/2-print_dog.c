#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: a pointer to a struct dog
 *
 * Description: If an element of d is NULL, print (nil) instead
 * of this element. (if name is NULL, print Name: (nil))
 * If d is NULL print nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("(nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: 0");
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
