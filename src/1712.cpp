/* Copyright https://www.acmicpc.net/problem/1712
 * break-even point
 * KangSK
 */

#include <iostream>
#include <string>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int a, b, c;
	std::cin >> a >> b >> c;
	
	if (b >= c)
	{
		std::cout << -1 << '\n';
		return 0;
	}
	std::cout << (a / (c - b) + 1) << '\n';

	return 0;
}