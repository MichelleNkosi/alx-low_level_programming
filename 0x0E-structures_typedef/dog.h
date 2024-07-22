#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's basic info
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This structure holds basic information about a dog.
 */
struct dog
{
char *name;
float age;
char *owner;
};

/* Typedef for struct dog */
typedef struct dog dog_t;

/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
