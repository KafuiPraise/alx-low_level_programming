#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's info
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 *
 * Description: more detailed description
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
