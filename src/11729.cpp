/* Copyright https://www.acmicpc.net/problem/11729
 * tower of hanoi
 * KangSK
 */

#include <iostream>
#include <cmath>

void printHanoi(int, int, int);

void printHanoi(int N, int from, int to)
{
	if (N == 1)
	{
		std::cout << from << ' ' << to << '\n';
		return;
	}
	if (N == 2)
	{
		std::cout << from << ' ' << (6 - from - to) << '\n';
		std::cout << from << ' ' << to << '\n';
		std::cout << (6 - from - to) << ' ' << to << '\n';
		return;
	}

	int tto = 6 - from - to;
	
	printHanoi(N - 1, from, tto);
	std::cout << from << ' ' << to << '\n';
	printHanoi(N - 1, tto, to);
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N;
	std::cin >> N;

	char buf[1024];
	sprintf(buf, "%d", (int)(std::pow(2, N) - 1));
	std::cout << buf << '\n';
	
	printHanoi(N, 1, 3);

	return 0;
}