/* Copyright https://www.acmicpc.net/problem/4344
 * At least average
 * KangSK
 */

#include <iostream>
#include <cstdlib>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::cout.precision(4);
	
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		int m;
		std::cin >> m;

		int *piS = new int[m];
		int s = 0; // sum
		for (int j = 0; j < m; j++)
		{
			std::cin >> piS[j];
			s += piS[j];
		}

		double avg = ((double)s) / m;
		int count = 0;
		for (int j = 0; j < m; j++)
		{
			if (piS[j] > avg)
				count++;
		}

		char buf[10];
		sprintf(buf, "%.3lf", ((double)count) / m * 100);
		std::cout << buf << "%\n";

		delete[] piS;
	}

	return 0;
}