#include "dog.h"
#include <stddef.h>
/**
* init_dog - Initializes a variable of type struct dog.
* @d: Pointer to the struct dog to initialize.
* @name: The name of the dog.
* @age: The age of the dog.
* @owner: The owner's name.
*
* Description: Assigns the values of name, age, and owner
*              to the members of the struct dog, provided
*              the pointer is not NULL.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL) /* Check if the pointer is valid */
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
