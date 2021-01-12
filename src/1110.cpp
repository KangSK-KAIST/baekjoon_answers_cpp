/* Copyright https://www.acmicpc.net/problem/1110
 * addition cycle
 * KangSK
 */

#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n;
	std::cin >> n;

	int m = n;
	int i = 0;
	while (true)
	{
		m = (m % 10) * 10 + ((m / 10 + m % 10) % 10);
		i++;

		if (n == m)
			break;
	}
	std::cout << i << '\n';
	return 0;
}