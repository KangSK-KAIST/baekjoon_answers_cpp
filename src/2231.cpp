/* Copyright https://www.acmicpc.net/problem/2798
 * Generator
 * KangSK
 */

#include <iostream>
#include <cmath>

#include "includes/basics.hpp"

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::cout.precision(10);

	int N;
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		if ((i + sumOfDigits(i)) == N)
		{
			std::cout << i << '\n';
			return 0;
		}
	}

	std::cout << "0\n";

	return 0;
}