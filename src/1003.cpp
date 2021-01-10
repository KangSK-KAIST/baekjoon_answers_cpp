/* Copyright https://www.acmicpc.net/problem/1003
 * fibbonacci
 * KangSK
 */

#include <iostream>

int fib(int n);

int scratch[50] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169};

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N;
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		int n;
		std::cin >> n;

		if (n == 0)
		{
			std::cout << "1 0\n";
			continue;
		}
		std::cout << fib(n - 1) << " " << fib(n) << '\n';
	}
	return 0;
}

int fib(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;

	for (int i = 20; i < n; i++)
	{
		if (scratch[i] == 0)
			scratch[i] = scratch[i-1] + scratch[i-2];
	}
	return scratch[n-1];
}