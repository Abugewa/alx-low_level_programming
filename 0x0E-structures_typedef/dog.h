#ifndef _DOG_H_
#define _DOG_H_


/**
 * struct dog - structure that stores things about dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 *
 * Description: the "dog" structure stores vital information
 * about the dog or dogs including name age and name of owner
 */

struct dog
{
	char *name;	/* 8 bytes */
	float age;	/* 4 bytes */
	char *owner;	/* 8 bytes */
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
