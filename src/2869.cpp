/* Copyright https://www.acmicpc.net/problem/2869
 * the snail wants to climb
 * KangSK
 */

#include <iostream>
#include <cmath>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::cout.precision(10);

	int a, b, v;
	std::cin >> a >> b >> v;

	// normal days + first day + last day
	std::cout << ((v - a) / (a - b)) + 1 + (((v - a) % (a - b) == 0) ? 0 : 1) << '\n';

	return 0;
}