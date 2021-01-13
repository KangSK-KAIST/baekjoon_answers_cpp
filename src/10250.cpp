/* Copyright https://www.acmicpc.net/problem/2869
 * Hotel ACM
 * KangSK
 */

#include <iostream>
#include <cmath>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::cout.precision(10);

	int N;
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		int h, w, n;
		std::cin >> h >> w >> n;

		int r = ceil((double)n / (double)h); // room
		int f = n - (r - 1) * h; // floor

		char buf[1024];
		sprintf(buf, "%d%02d", f, r);
		std::cout << buf << '\n';
	}

	return 0;
}