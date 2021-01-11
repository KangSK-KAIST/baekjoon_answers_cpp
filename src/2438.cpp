/* Copyright https://www.acmicpc.net/problem/2438
 * printing stars (1)
 * KangSK
 */

#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
			std::cout << '*';
		std::cout << '\n';
	}
	return 0;
}