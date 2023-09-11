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

/**
 * init_dog - Initializes a struct dog with specified values.
 * @d: Pointer to the struct dog to be initialized.
 * @name: Pointer to a character array representing the dog's name.
 * @age: Age of the dog as a floating-point number.
 * @owner: Pointer to a character array representing the owner's name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
