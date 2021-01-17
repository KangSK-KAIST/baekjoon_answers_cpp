/* Copyright https://www.acmicpc.net/problem/1427
 * Sort inside
 * KangSK
 */

#include <iostream>
#include <array>
#include <algorithm>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N;
	std::cin >> N;

	int n[10] = {};
	
	int l = 0; // log
	while (N > 0)
	{
		n[l++] = N % 10;
		N /= 10;
	}

	std::sort(n, n + l);

	int s = 0;
	for (int i = l - 1; i >= 0; i--)
		s = (s * 10) + n[i];

	std::cout << s << '\n';

	return 0;
}