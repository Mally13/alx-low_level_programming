#ifndef DOG_H
#define DOG_H

/* A header file contaiining structures, function prototypes and typedef */

/**
 * struct dog - A type describing a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif/* endif ifndef DOG_H */
