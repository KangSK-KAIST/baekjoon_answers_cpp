/* Copyright https://www.acmicpc.net/problem/2742
 * tnirp to n
 * KangSK
 */

#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N;
	std::cin >> N;

	for (int i = N; i > 0; i--)
		std::cout << i << '\n';

	return 0;
}