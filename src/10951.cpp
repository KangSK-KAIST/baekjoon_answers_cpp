/* Copyright https://www.acmicpc.net/problem/10951
 * A + B (4)
 * KangSK
 */

#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	while (true)
	{
		int a, b;
		std::cin >> a >> b;
		if (!std::cin)
			break;
		std::cout << (a + b) << '\n';
	}
	return 0;
}