/* Copyright https://www.acmicpc.net/problem/2884
 * Alarm clock
 * KangSK
 */

#include <iostream>

int dec_hour(int n)
{
	int h = n - 1;
	return (h >= 0) ? h : 23;
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int h, m;
	std::cin >> h >> m;
	
	if (m >= 45)
		std::cout << h << ' ' << (m - 45) << '\n';
	else
		std::cout << dec_hour(h) << ' ' << (m + 15) << '\n';

	return 0;
}