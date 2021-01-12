/* Copyright https://www.acmicpc.net/problem/1065
 * Han-number
 * KangSK
 */

#include <iostream>
#include <cstdlib>

bool isHan(int n)
{
	if (n < 100)
		return true;
	if (!isHan(n / 10))
		return false;
	if (((n / 100) % 10 - (n / 10) % 10) != ((n / 10) % 10 - n % 10))
		return false;
	return true;
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::cout.precision(4);

	int n;
	std::cin >> n;

	int c = 0; // count
	for (int i = 1; i <= n; i++)
	{
		if (isHan(i))
			c++;
	}
	std::cout << c << '\n';
	return 0;
}