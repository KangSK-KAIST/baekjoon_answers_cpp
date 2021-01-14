/* Copyright https://www.acmicpc.net/problem/2581
 * Primes
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

	int M, N;
	std::cin >> M >> N;

	int m = 0; // min
	int s = 0; // sum
	for (int i = M; i <= N; i++)
	{
		if (isPrime(i))
		{
			if (m == 0)
				m = i;
			s += i;
		}
	}
	if (m == 0)
		std::cout << "-1" << '\n';
	else
		std::cout << s << '\n' << m << '\n';
	return 0;
}