#include <stdio.h>
#include "dog.h"
/**
* main - Entry point to test the struct dog.
*
* Return: Always 0.
*/
int main(void)
{
struct dog my_dog;
/* Initialize the structure members */
my_dog.name = "Poppy";
my_dog.age = 3.5;
my_dog.owner = "Bob";
/* Print the dog's information */
printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
return (0);
}
