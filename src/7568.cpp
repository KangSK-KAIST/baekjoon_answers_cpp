/* Copyright https://www.acmicpc.net/problem/7568
 * Body size
 * KangSK
 */

#include <iostream>
#include <cmath>


int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N;
	std::cin >> N;

	int x[50];
	int y[50];
	int a[50];

	for (int i = 0; i < N; i++)
		std::cin >> x[i] >> y[i];

	for (int i = 0; i < N; i++)
	{
		int s = 0;
		for (int j = 0; j < N; j++)
		{
			if ((x[i] < x[j]) && (y[i] < y[j]))
				s++;
		}
		a[i] = s + 1;
	}

	for (int i = 0; i < N - 1; i++)
		std::cout << a[i] << ' ';

	std::cout << a[N - 1] << '\n';

	return 0;
}