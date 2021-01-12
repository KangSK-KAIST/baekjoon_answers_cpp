#ifndef INCLUDE_BASICS_H
#define INCLUDE_BASICS_H

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

#endif // INCLUDE_BASICS_H