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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* DOG_H */
