#include "main.h"
#include <stdlib.h>
/**
* _strdup - Returns a pointer to a newly allocated space in memory
*           containing a copy of the string str.
* @str: The string to duplicate.
*
* Return: Pointer to the duplicated string, or NULL if str is NULL
*         or memory allocation fails.
*/
char *_strdup(char *str)
{
char *dup;
unsigned int i, len = 0;
/* Check if str is NULL */
if (str == NULL)
return (NULL);
/* Calculate the length of the string */
while (str[len] != '\0')
len++;
/* Allocate memory for the duplicate string, including the null-terminator */
dup = malloc((len + 1) * sizeof(char));
if (dup == NULL) /* Check if malloc failed */
return (NULL);
/* Copy the string into the newly allocated memory */
for (i = 0; i <= len; i++)
dup[i] = str[i];
return (dup);
}
