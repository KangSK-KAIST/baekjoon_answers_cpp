/* Copyright https://www.acmicpc.net/problem/11720
 * Sum of numbers
 * KangSK
 */

#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N;
	std::cin >> N;

	int s = 0; // sum
	for (int i = 0; i < N; i++)
	{
		char c;
		std::cin >> c;
		s += (int)(c - '0');
	}
	std::cout << s << '\n';
	return 0;
}