#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string.
 * @s: The string to measure
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}

/**
 * _strcpy - a function that copies a string
 * @dest: The buffer pointer
 * @src: the string pointer
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = src[x];

	return (dest);

}

/**
 * new_dog - creates a new dog.
 * @name: the variable name
 * @age: the variable age
 * @owner: the variable owner
 *
 * Return: returns a new dog if succesful or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(_strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	_strcpy(d->name, name);
	d->owner = malloc(_strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	_strcpy(d->owner, owner);
	d->age = age;
	return (d);
}
