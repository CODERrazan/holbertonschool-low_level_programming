#include "main.h"
#include <stdlib.h>
/**
* main - Test the create_array function.
*
* Return: Always 0.
*/
int main(void)
{
char *buffer;
unsigned int i;
buffer = create_array(10, 'A'); /* Create array with 10 'A' chars */
if (buffer == NULL)
return (1);
/* Print each character in the buffer using _putchar */
for (i = 0; i < 10; i++)
_putchar(buffer[i]);
_putchar('\n');
/* Free the memory */
free(buffer);
return (0);
}
