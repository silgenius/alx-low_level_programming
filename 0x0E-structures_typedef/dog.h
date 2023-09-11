#ifdef DOG_H
#define DOG_H

/**
 * struct dog - Represents information about a dog.
 * @name: Pointer to a character array for the dog's name.
 * @age: Age of the dog as a floating-point number.
 * @owner: Pointer to a character array for the owner's name.
 *
 * Description: This structure stores details about a dog, including its name,
 *              age, and the name of its owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * dogt - typedef for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* DOG_H */
