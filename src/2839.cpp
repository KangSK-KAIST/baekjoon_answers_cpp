/* Copyright https://www.acmicpc.net/problem/2839
 * Sugar delivery
 * KangSK
 */

#include <iostream>
#include <cmath>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::cout.precision(10);

	int N;
	std::cin >> N;

	int c = 0;
	if ((N == 4) || (N == 7))
		std::cout << "-1\n";
	else
	{
		while (N % 5 != 0)
		{
			N -= 3;
			c++;
		}
		c += N / 5;
		std::cout << c << '\n';
	}

	return 0;
}