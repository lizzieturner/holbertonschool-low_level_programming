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
	char *name_copy, *owner_copy;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	name_length = _strlen(name) + 1;
	owner_length = _strlen(owner) + 1;

	name_copy = malloc(sizeof(char) * name_length);
	if (name_copy == NULL)
	{
		free(dog);
		return (NULL);
	}

	owner_copy = malloc(sizeof(char) * owner_length);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(dog);
		return (NULL);
	}

	name_copy = _strcopy(name_copy, name, name_length);
	owner_copy = _strcopy(owner_copy, owner, owner_length);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
