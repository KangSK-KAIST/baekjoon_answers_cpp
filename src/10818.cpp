/* Copyright https://www.acmicpc.net/problem/10818
 * min, max
 * KangSK
 */

#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n;
	std::cin >> n;

	int min = 1000001;
	int max = -1000001;
	int a;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a;
		if (min > a)
			min = a;
		if (max < a)
			max = a;
	}
	std::cout << min << ' ' << max << '\n';
	return 0;
}