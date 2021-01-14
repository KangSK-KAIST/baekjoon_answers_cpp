#ifndef INCLUDE_BASICS_H
#define INCLUDE_BASICS_H

#include <cmath>
#include <assert.h>

/*
 * Sum of digits
 * 
 * @param integer number n
 * @return the sum of digits of n
 */
int sumOfDigits(int n)
{
	assert(n >= 0);

	int s = 0; // sum
	while (n > 0)
	{
		s += n % 10;
		n /= 10;
	}
	return s;
}

/*
 * return whether an integer is prime
 * 
 * tries division of all odd numbers up to sqrt(n)
 * 
 * @param integer n
 * @return boolean of whether prime
 */
bool isPrime(int n)
{
	assert(n > 0);

	if (n == 1)
		return false;
	else if (n == 2)
		return true;
	else if (n % 2 == 0)
		return false;
	else
	{
		int bar = ceil(sqrt(n));
		for (int i = 3; i <= bar; i += 2)
		{
			if (n % i == 0)
				return false;
		}
	}
	return true;
}

/*
 * Runs Sieve of Eratosthenes on given boolean array
 * 
 * Make sure that the given array is large enough
 * Known Issue: If the size of the array is 2, it goes into inf loop
 * 
 * @param pointer to the boolean pArray and its size N
 * @return void
 */
void primeSieve(bool* pArray, int N)
{
	pArray[0] = false;			// Ensure 1 is false
	for (int i = 1; i < N; i++) // 2 to N is init to true
		pArray[i] = true;

	int p = 2; // global p

	int lim = ceil(sqrt(N));
	while (p <= lim)
	{
		for (int i = 2 * p - 1; i < N; i += p)
			pArray[i] = false; // Multiple of p is false
		for (int i = p; i < N; i++)
		{
			if (pArray[i])
			{
				p = i + 1;
				break;
			}
		}
	}
}

#endif // INCLUDE_BASICS_H