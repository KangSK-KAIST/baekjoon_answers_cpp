/* Copyright https://www.acmicpc.net/problem/2292
 * honey comb
 * KangSK
 */

#include <iostream>
#include <cmath>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::cout.precision(10);

	int n;
	std::cin >> n;

	// (n - 1) = 3 * (ans) * (ans - 1)
	// 3a^2 - 3a - n + 1 = 0
	// a = (3 + sqrt(9 + 12n - 12)) / 6

	int a = ceil((3 + sqrt(12 * (double)n - 3)) / 6);

	std::cout << a << '\n';

	return 0;
}