/* Copyright https://www.acmicpc.net/problem/15650
 * N and M 2
 * KangSK
 */

#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

void printAll(std::vector<int> n, int N, int M)
{
	if ((int)n.size() == M)
	{
		for (int i : n)
			std::cout << i << ' ';
		std::cout << '\n';
		return;
	}
	if (n.size() == 0)
	{
		for (int i = 1; i <= N; i++)
		{
			std::vector<int> t;
			t.push_back(i);
			printAll(t, N, M);
		}
		return;
	}
	for (int i = n[n.size() - (size_t)1]; i <= N; i++)
	{
		std::vector<int> t = n;
		t.push_back(i);
		printAll(t, N, M);
	}
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N, M;
	std::cin >> N >> M;

	std::vector<int> n;

	printAll(n, N, M);

	return 0;
}