/* Copyright https://www.acmicpc.net/problem/9020
 * Goldbach's conjecture
 * KangSK
 */

#include <iostream>

#include "includes/basics.hpp"

#define MAX_NUM 10000

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N;
	std::cin >> N;

	bool isPrime[MAX_NUM];
	primeSieve(isPrime, MAX_NUM);

	for (int i = 0; i < N; i++)
	{
		int n;
		std::cin >> n;

		for (int i = n / 2; i >= 2; i--)
		{
			if ((isPrime[i - 1]) && (isPrime[n - i - 1]))
			{
				std::cout << i << ' ' << n - i << '\n';
				break;
			}
		}
	}


	return 0;
}