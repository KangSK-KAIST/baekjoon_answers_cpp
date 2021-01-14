/* Copyright https://www.acmicpc.net/problem/2447
 * printing stars 5
 * KangSK
 */

#include <iostream>
#include <vector>

bool printStar(int N, int r, int c)
{
	if (N == 3)
	{
		if (r == 1)
			return true;
		if (r == 3)
			return true;
		if (c == 2)
			return false;
		return true;
	}
	else
	{
		int n = N / 3;
		int nr = (r - 1) / n;
		int nc = (c - 1) / n;

		if (nr == 0)
			return printStar(n, r - nr * n, c - nc * n);
		if (nr == 2)
			return printStar(n, r - nr * n, c - nc * n);
		if (nc == 1)
			return false;
		return printStar(n, r - nr * n, c - nc * n);
	}
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N;
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (printStar(N, i + 1, j + 1))
				std::cout << '*';
			else
				std::cout << ' ';
		}
		std::cout << '\n';
	}

	return 0;
}