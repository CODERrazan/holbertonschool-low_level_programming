#include "main.h"
/**
* _sqrt_helper - Recursively finds the natural square root of a number.
* @n: The number to find the square root of.
* @guess: The current number to test as the square root.
*
* Return: The natural square root of `n`, or -1 if it doesn't exist.
*/
int _sqrt_helper(int n, int guess)
{
if (guess * guess == n) /* Found the square root */
return (guess);
if (guess * guess > n) /* Exceeded, no natural square root */
return (-1);
return (_sqrt_helper(n, guess + 1)); /* Test next number */
}
/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The number to find the square root of.
*
* Return: The natural square root of `n`, or -1 if it doesn't exist.
*/
int _sqrt_recursion(int n)
{
if (n < 0) /* No square root for negative numbers */
return (-1);
return (_sqrt_helper(n, 0)); /* Start checking from 0 */
}
