#include "function_pointers.h"
/**
* array_iterator - Executes a function on each element of an array.
* @array: The array to iterate over.
* @size: The size of the array.
* @action: A pointer to the function to execute on each element.
*
* Description: For each element in the array, the function pointed to by
*              `action` is called with the current element as its argument.
*              If `array` or `action` is NULL, the function does nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]); /* Call the function on each element */
}
}
