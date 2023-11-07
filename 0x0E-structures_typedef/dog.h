#ifndef DOG_H
#define DOG_H

/**
 *struct dog - a dog struct
 *@name: dog's name
 *@age: dog's age
 *@owner: dog owner's name
 *
 * description: dog identifier
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
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
