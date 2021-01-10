/* Copyright https://www.acmicpc.net/problem/10869
 * remainder
 * KangSK
 */

#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int a, b, c;
	std::cin >> a >> b >> c;
	std::cout << (a + b) % c << '\n';
	std::cout << ((a % c) + (b % c)) % c << '\n';
	std::cout << (a * b) % c << '\n';
	std::cout << ((a % c) * (b % c)) % c << '\n';
	return 0;
}