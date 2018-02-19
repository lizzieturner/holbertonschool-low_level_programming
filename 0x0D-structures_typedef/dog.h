#ifndef _DOG_H_
#define _DOG_H_

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/**
 * struct dog - dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 *
 * Description: struct dog provides information about individual dogs,
 * including name of the dog, age of the dog, and name of the dog's owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}


#endif
