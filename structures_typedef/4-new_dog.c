#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
* new_dog - Creates a new dog.
* @name: The name of the dog.
* @age: The age of the dog.
* @owner: The owner's name.
*
* Return: Pointer to the newly created dog_t structure, or NULL
* if memory allocation fails.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *new_name, *new_owner;
/* Allocate memory for the new dog structure */
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
/* Allocate and copy the name */
new_name = malloc(strlen(name) + 1);
if (new_name == NULL)
{
free(new_dog);
return (NULL);
}
strcpy(new_name, name);
/* Allocate and copy the owner */
new_owner = malloc(strlen(owner) + 1);
if (new_owner == NULL)
{
free(new_name);
free(new_dog);
return (NULL);
}
strcpy(new_owner, owner);
/* Set the fields of the new dog structure */
new_dog->name = new_name;
new_dog->age = age;
new_dog->owner = new_owner;
return (new_dog);
}
