#include "main.h"
/**
* is_prime_helper - Checks if a number is divisible by another number.
* @n: The number to check.
* @divisor: The current divisor to test.
*
* Return: 1 if `n` is prime, otherwise 0.
*/
int is_prime_helper(int n, int divisor)
{
if (divisor == 1) /* Base case: only divisible by 1 */
return (1);
if (n % divisor == 0) /* Not prime if divisible by divisor */
return (0);
return (is_prime_helper(n, divisor - 1)); /* Recursive call */
}
/**
* is_prime_number - Checks if an integer is a prime number.
* @n: The number to check.
*
* Return: 1 if `n` is a prime number, otherwise 0.
*/
int is_prime_number(int n)
{
if (n <= 1) /* Negative numbers, 0, and 1 are not prime */
return (0);
return (is_prime_helper(n, n / 2)); /* Start checking from n/2 */
}
