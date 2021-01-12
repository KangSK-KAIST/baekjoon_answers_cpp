/* Copyright https://www.acmicpc.net/problem/3052
 * remainder
 * KangSK
 */

#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	
	int flag[42] = {};
	int a;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> a;
		flag[(a % 42)] = 1;
	}

	int s = 0;
	for (int i = 0; i < 42; i++)
		s += flag[i];
	
	std::cout << s << '\n';
	return 0;
}