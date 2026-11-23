#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type with following elements:
 * @name: the name
 * @age: the age
 * @owner: the owner
 *
 * Description: stores the information for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
