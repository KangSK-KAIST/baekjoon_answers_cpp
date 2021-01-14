/* Copyright https://www.acmicpc.net/problem/1978
 * Finding primes
 * KangSK
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

#include "includes/basics.hpp"

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::cout.precision(10);

	int N;
	std::cin >> N;

	int c = 0;
	for (int i = 0; i < N; i++)
	{
		int p;
		std::cin >> p;

		if (isPrime(p))
			c++;
	}
	std::cout << c << '\n';
	return 0;
}