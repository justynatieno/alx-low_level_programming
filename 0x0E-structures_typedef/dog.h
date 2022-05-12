#ifndef DOG_H
#define DOG_H
/**
 * struct dog - type with three elements
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog _t -Typedef of struct dog
 */
typedef struct dog dog_t;

void init_dog((struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *str);
char *_strcopy(char *dest, char *src);

#endif
