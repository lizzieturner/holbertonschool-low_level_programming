#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - finds the length of a string
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
 * _strcopy - copies a source string to a destination string
 * @dest: destination string
 * @src: source string
 * @length: length of string
 *
 * Return: destination string
 */

char *_strcopy(char *dest, char *src, int length)
{
	int i;

	for (i = 0; i < length; i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 *
 * Return: new dog, NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_length, owner_length;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	name_length = _strlen(name);
	owner_length = _strlen(owner);

	dog->name = malloc(sizeof(char) * name_length);
	if (dog->name == NULL)
	{
		free(dog);
		free(dog->owner);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * owner_length);
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name, name_length);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner, owner_length);

	return (dog);
}
