/* Copyright https://www.acmicpc.net/problem/3053
 * taxi coordinate
 * KangSK
 */

#include <iostream>
#include <cmath>
#include <cstddef>

#define MAX_NUM 10000

const double PI = 3.141592653589793238463;

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N;
	std::cin >> N;

	char buf[1024];
	sprintf(buf, "%.6lf\n%.6lf\n", PI * N * N, 2.0 * N * N);

	std::cout << buf << '\n';

	return 0;
}