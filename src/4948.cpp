/* Copyright https://www.acmicpc.net/problem/4948
 * Betrand Postulate
 * KangSK
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

#define MAX_NUM 246912

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	bool isPrime[MAX_NUM] = {};		 // 1 to MAX_NUM
	isPrime[0] = false;				 // Ensure 1 is false
	for (int i = 1; i < MAX_NUM; i++) // 2 to N is init to true
		isPrime[i] = true;

	int p = 2; // global p

	while (1)
	{
		// std::string s;
		int N;
		std::cin >> N;

		if (N == 0)
			break;

		int lim = ceil(sqrt(2 * N));
		while (p <= lim)
		{
			for (int i = 2 * p - 1; i < MAX_NUM; i += p)
				isPrime[i] = false; // Multiple of p is false
			for (int i = p; i < MAX_NUM; i++)
			{
				if (isPrime[i])
				{
					p = i + 1;
					break;
				}
			}
		}

		int c = 0;
		for (int i = N + 1; i <= 2 * N; i++)
		{
			if (isPrime[i - 1])
				c++;
		}
		std::cout << c << '\n';
	}

	return 0;
}