/* Copyright https://www.acmicpc.net/problem/2009
 * The fouth point
 * KangSK
 */

#include <iostream>
#include <cmath>

#define MAX_NUM 10000

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int xs[3], ys[3];

	for (int i = 0; i < 3; i++)
		std::cin >> xs[i] >> ys[i];

	int x, y;
	if (xs[0] == xs[1])
		x = xs[2];
	else if (xs[0] == xs[2])
		x = xs[1];
	else
		x = xs[0];

	if (ys[0] == ys[1])
		y = ys[2];
	else if (ys[0] == ys[2])
		y = ys[1];
	else
		y = ys[0];

	std::cout << x << ' ' << y << '\n';

	return 0;
}