#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - Allocates memory using malloc.
* @b: The number of bytes to allocate.
*
* Return: Pointer to the allocated memory.
*         If malloc fails, the process terminates with status 98.
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
/* Dynamically allocate memory */
ptr = malloc(b);
/* Check if malloc fails */
if (ptr == NULL)
{
exit(98); /* Terminate the process with exit status 98 */
}
return (ptr);
}
