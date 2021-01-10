/* Copyright https://www.acmicpc.net/problem/1008
 * A / B
 * KangSK
 */

#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::cout.precision(17);

	int a, b;
	std::cin >> a >> b;
	std::cout << ((double)a / (double)b) << '\n';
	return 0;
}