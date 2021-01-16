/* Copyright https://www.acmicpc.net/problem/2751
 * Sorting 2
 * KangSK
 */

#include <iostream>
#include <array>
#include <algorithm>

#define NUM_MAX 1000000

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N;
	std::cin >> N;

	std::array<int, NUM_MAX> n = {};

	for (int i = 0; i < N; i++)
		std::cin >> n[i];
	
	std::sort(n.begin(), n.begin() + N);

	for (int i = 0; i < N; i++)
		std::cout << n[i] << '\n';

	return 0;
}