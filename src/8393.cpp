/* Copyright https://www.acmicpc.net/problem/8393
 * sum to n
 * KangSK
 */

#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N;
	std::cin >> N;

	std::cout << N * (N + 1) / 2 << '\n';
	return 0;
}