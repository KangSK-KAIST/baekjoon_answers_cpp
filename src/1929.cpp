/* Copyright https://www.acmicpc.net/problem/1929
 * Print all primes
 * KangSK
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int M, N;
	std::cin >> M >> N;

	bool isPrime[1000000] = {}; // 1 to N
	isPrime[0] = false; // Ensure 1 is false
	for (int i = 1; i < 1000000; i++) // 2 to N is init to true
		isPrime[i] = true;

	int lim = ceil(sqrt(N));
	int p = 2; // prime
	while (p <= lim)
	{
		for (int i = 2 * p - 1; i < N; i += p)
			isPrime[i] = false; // Multiple of p is false
		for (int i = p; i < 1000000; i++)
		{
			if (isPrime[i])
			{
				p = i + 1;
				break;
			}
		}
	}

	for (int i = M - 1; i < N; i++)
	{
		if (isPrime[i])
			std::cout << (i + 1) << '\n';
	}

	return 0;
}