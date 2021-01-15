/* Copyright https://www.acmicpc.net/problem/1436
 * End of World
 * KangSK
 */

#include <iostream>
#include <cmath>

bool isDoom(int n)
{
	int t = 0; // temp
	int m = 0; // max
	while (n > 0)
	{
		if (n % 10 == 6)
		{
			t++;
			m = (t > m) ? t : m;
		}
		else
			t = 0;
		n /= 10;
	}
	if (m >= 3)
		return true;
	return false;
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N;
	std::cin >> N;

	int i = 665;
	int c = 0; // count
	while (c < N)
	{
		i++;
		if (isDoom(i))
			c++;
	}

	std::cout << i << '\n';

	return 0;
}