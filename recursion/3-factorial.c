#include "main.h"
/**
* factorial - Returns the factorial of a given number.
* @n: The number whose factorial is to be calculated.
*
* Return: The factorial of `n`, or -1 if `n` is negative.
*/
int factorial(int n)
{
if (n < 0) /* Error case: n is negative */
return (-1);
if (n == 0) /* Base case: factorial of 0 is 1 */
return (1);
return (n * factorial(n - 1)); /* Recursive case */
}
