/* Copyright https://www.acmicpc.net/problem/10952
 * A + B (5)
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
		if ((a == 0) && (b == 0))
			break;
		std::cout << (a + b) << '\n';
	}
	return 0;
}