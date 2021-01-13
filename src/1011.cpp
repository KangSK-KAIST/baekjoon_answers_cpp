/* Copyright https://www.acmicpc.net/problem/1011
 * Fly me to Alpha Centauri
 * KangSK
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::cout.precision(10);

	int N;
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		int x, y;
		std::cin >> x >> y;

		double n = y - x - 1.0;
		std::cout << floor(sqrt(n)) + floor((sqrt(4 * n + 1) - 1) / 2) + 1 << '\n';
	}

	return 0;
}