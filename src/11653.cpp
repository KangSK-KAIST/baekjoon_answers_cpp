/* Copyright https://www.acmicpc.net/problem/11653
 * Factorization
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

	if (N == 1)
		return 0;

	for (int i = 2; i <= N; i++)
	{
		// Checking whether divisor is prime is unnecessary overhead
		// if (!isPrime(i))
		// 	continue;
		while (N % i == 0)
		{
			std::cout << i << '\n';
			N /= i;
		}
	}
	return 0;
}