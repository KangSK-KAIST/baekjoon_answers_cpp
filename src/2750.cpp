/* Copyright https://www.acmicpc.net/problem/2750
 * Sorting
 * KangSK
 */

#include <iostream>
#include <array>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N;
	std::cin >> N;

	std::array<int, 1000> n = {};

	for (int i = 0; i < N; i++)
		std::cin >> n[i];
	
	std::sort(n.begin(), n.begin() + N);

	for (int i = 0; i < N; i++)
		std::cout << n[i] << '\n';

	return 0;
}