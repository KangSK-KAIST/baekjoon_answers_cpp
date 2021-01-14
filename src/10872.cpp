/* Copyright https://www.acmicpc.net/problem/10872
 * factorial
 * KangSK
 */

#include <iostream>
#include <cmath>
#include <cstddef>

int factorial(int n)
{
	if ((n == 0) || (n == 1))
		return 1;
	else
		return n * factorial(n - 1);
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N;
	std::cin >> N;

	std::cout << factorial(N) << '\n';

	return 0;
}