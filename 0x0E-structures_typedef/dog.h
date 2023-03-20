#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - represents the dog object
 * @name: First Member
 * @age: Second Member
 * @owner:Third Member
 *
 * Description: Represents information of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
