#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - check if n is prime
 * @n: Number to check
 * Description: calls secondary function
 * Return:0 if not prime, 1 if prime as given by isPrime
 */
int is_prime_number(int n)
{
	return (isPrime(n, 2));
}
/**
 * isPrime - check if number is prime
 * @n: number to check
 * @i: divisor and number being modified
 * Description: check code
 * Return: 0 or 1
 */
int isPrime(int n, int i)
{
	if (n == i)
		return (1);
	if (n == 0 || n == 1)
		return (0);
	else if (n % i == 0 || n < 0)
		return (0);
	return (isPrime(n, i + 1));
}
