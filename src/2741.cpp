/* Copyright https://www.acmicpc.net/problem/2741
 * print to n
 * KangSK
 */

#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N;
	std::cin >> N;

	for (int i = 1; i < N + 1; i++)
		std::cout << i << '\n';

	return 0;
}