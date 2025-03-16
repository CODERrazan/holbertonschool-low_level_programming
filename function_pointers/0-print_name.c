#include "function_pointers.h"
#include <stddef.h> /* For NULL */
/**
* print_name - Calls a function to print a name.
* @name: The name to be printed.
* @f: Function pointer to the function that prints the name.
*
* Description: This function checks that both the name and function
*              pointer are valid (not NULL) and then calls the
*              function pointer to print the name.
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name); /* Call the function pointer */
}
