/* Copyright https://www.acmicpc.net/problem/2908
 * constants
 * KangSK
 */

#include <iostream>
#include <string>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n, m;
	std::cin >> n >> m;

	int n_a, m_a;
	n_a = n + ((n % 10) - (n / 100)) * 99;
	m_a = m + ((m % 10) - (m / 100)) * 99;

	std::cout << ((n_a > m_a) ? n_a : m_a) << '\n';

	return 0;
}