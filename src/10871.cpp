/* Copyright https://www.acmicpc.net/problem/10871
 * smaller than x
 * KangSK
 */

#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n, x;
	std::cin >> n >> x;

	int a;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a;
		if (a < x)
		{
			std::cout << a;
			
			if (i != (n - 1))
				std::cout << ' ';
		}
	}
	std::cout << '\n';
	return 0;
}