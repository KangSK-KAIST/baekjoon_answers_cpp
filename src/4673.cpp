/* Copyright https://www.acmicpc.net/problem/4673
 * self numbers
 * KangSK
 */

#include <iostream>
#include <cstdlib>

#include "includes/basics.hpp"

int scratch[10001] = {1, 0};

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::cout.precision(10);

	for (int i = 1; i <= 9999; i++)
	{
		int n = i + sumOfDigits(i);
		if (n <= 10000)
			scratch[n] = 1;
	}
	for (int i = 0; i < 10000; i++)
	{
		if (scratch[i] == 0)
		std::cout << i << '\n';
	}
	return 0;
}