#ifndef INCLUDE_BASICS_H
#define INCLUDE_BASICS_H

#include <cmath>
#include <assert.h>

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

#endif // INCLUDE_BASICS_H