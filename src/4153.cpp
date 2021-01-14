/* Copyright https://www.acmicpc.net/problem/4153
 * Is a right triangle
 * KangSK
 */

#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

#define MAX_NUM 10000

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	while (1)
	{
		int l[3];
		std::cin >> l[0] >> l[1] >> l[2];

		if ((l[0] == 0) || (l[1] == 0) || (l[2] == 0))
			break;

		std::sort(l, l + 3);

		if (l[0] + l[1] <= l[2])
		{
			std::cout << "wrong\n";
			continue;
		}

		if (std::pow(l[0], 2) + std::pow(l[1], 2) == std::pow(l[2], 2))
			std::cout << "right\n";
		else
			std::cout << "wrong\n";
	}

	return 0;
}