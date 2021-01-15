/* Copyright https://www.acmicpc.net/problem/2798
 * Blackjack
 * KangSK
 */

#include <iostream>
#include <cmath>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::cout.precision(10);

	int N, M;
	std::cin >> N >> M;

	int* n = new int[N];
	int m = 0;

	for (int i = 0; i < N; i++)
		std::cin >> n[i];

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				int s = n[i] + n[j] + n[k];
				if (s > M)
					continue;
				if (s > m)
					m = s;
			}
		}
	}

	std::cout << m << '\n';

	return 0;
}