/* Copyright https://www.acmicpc.net/problem/10870
 * fibonacci 5
 * KangSK
 */

#include <iostream>
#include <cmath>
#include <cstddef>

int fibonacci(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N;
	std::cin >> N;

	std::cout << fibonacci(N) << '\n';

	return 0;
}