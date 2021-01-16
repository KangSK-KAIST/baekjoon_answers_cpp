/* Copyright https://www.acmicpc.net/problem/10989
 * Sorting 3
 * KangSK
 */

#include <iostream>
#include <array>
#include <algorithm>

#define NUM_MAX 10000000
#define MAXIMUM 10000


int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N;
	std::cin >> N;

	std::array<int, MAXIMUM + 1> n = {};

	for (int i = 0; i < N; i++)
	{
		int t;
		std::cin >> t;
		n[t]++;
	}

	for (int i = 0; i < MAXIMUM; i++)
	{
		for (int c = 0; c < n[i]; c++)
			std::cout << i << '\n';
	}

	return 0;
}