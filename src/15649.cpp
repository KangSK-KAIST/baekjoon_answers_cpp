/* Copyright https://www.acmicpc.net/problem/15649
 * N and M
 * KangSK
 */

#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

bool inVector(std::vector<int>* pn, int n)
{
	for (int i : *pn)
	{
		if (i == n)
			return true;
	}
	return false;
}

void printAll(std::vector<int> n, int N, int M)
{
	if ((int)n.size() == M)
	{
		for (int i : n)
			std::cout << i << ' ';
		std::cout << '\n';
		return;
	}
	for (int i = 1; i <= N; i++)
	{
		if (!inVector(&n, i))
		{
			std::vector<int> t = n;
			t.push_back(i);
			printAll(t, N, M);
		}
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