/* Copyright https://www.acmicpc.net/problem/1546
 * remainder
 * KangSK
 */

#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::cout.precision(10);

	int n;
	std::cin >> n;

	int s = 0; // sum
	int m = 0; // max
	int a;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a;
		s += a;
		m = (m >= a) ? m : a;
	}

	std::cout << ((double)s) / n / m * 100 << '\n';

	return 0;
}