#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new struct for dog
 * @name: pointer to dog name
 * @age: dog age
 * @owner: dog owner's name
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
char *copys(char *s1, char *s2);

#endif
