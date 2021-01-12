/* Copyright https://www.acmicpc.net/problem/2577
 * number of numbers
 * KangSK
 */

#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int a, b, c;
	std::cin >> a >> b >> c;
	int mul = a * b * c;

	int ans[10] = {};
	while (mul > 0)
	{
		ans[(mul % 10)]++;
		mul /= 10;
	}
	for (int i = 0; i < 10; i++)
		std::cout << ans[i] << '\n';
	return 0;
}