/* Copyright https://www.acmicpc.net/problem/10950
 * A + B
 * KangSK
 */

#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N;
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		int a, b;
		std::cin >> a >> b;
		std::cout << (a + b) << '\n';
	}
	return 0;
}