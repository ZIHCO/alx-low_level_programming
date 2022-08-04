#ifndef _HEADER_
#define _HEADER_
/**
 * struct dog - dog attributes
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: a dog's attributes
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
