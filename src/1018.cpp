/* Copyright https://www.acmicpc.net/problem/1018
 * Recoloring chess board
 * KangSK
 */

#include <iostream>
#include <cmath>


int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int M, N;
	std::cin >> M >> N;

	bool x[50][50];

	for (int i = 0; i < M; i++)
	{
		std::string s;
		std::cin >> s;
		for (int j = 0; j < N; j++)
		{
			if (s[j] == 'B')
				x[i][j] = false;
			else
				x[i][j] = true;
		}
	}

	int m = 251;

	for (int x_s = 0; x_s < M - 7; x_s++)
	{ // x shift
		for (int y_s = 0; y_s < N - 7; y_s++)
		{ // y shift
			int a = 0; // Start white
			int b = 0; // Start black

			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if ((i + j) % 2 == 0)
					{
						if (x[x_s + i][y_s + j] == true)
							a++;
						else
							b++;
					}
					else
					{
						if (x[x_s + i][y_s + j] == true)
							b++;
						else
							a++;
					}
				}
			}
			if (m > a)
				 m = a;
			if (m > b)
				m = b;
		}
	}

	std::cout << m << '\n';

	return 0;
}