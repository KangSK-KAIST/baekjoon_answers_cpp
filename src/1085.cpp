/* Copyright https://www.acmicpc.net/problem/1085
 * Escaping the rectangle
 * KangSK
 */

#include <iostream>
#include <cmath>

#define MAX_NUM 10000

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int x, y, w, h;
	std::cin >> x >> y >> w >> h;

	std::cout << std::min(std::min(x, w - x), std::min(y, h - y)) << '\n';

	return 0;
}