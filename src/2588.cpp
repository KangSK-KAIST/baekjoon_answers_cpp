/* Copyright https://www.acmicpc.net/problem/2588
 * multiplication
 * KangSK
 */

#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int a, b;
	std::cin >> a >> b;
	std::cout << a * (b % 10) << '\n';
	std::cout << a * ((b / 10) % 10) << '\n';
	std::cout << a * (b / 100) << '\n';
	std::cout << a * b << '\n';
	return 0;
}