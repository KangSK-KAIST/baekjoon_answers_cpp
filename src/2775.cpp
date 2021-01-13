/* Copyright https://www.acmicpc.net/problem/2775
 * I wanna be a chairman
 * KangSK
 */

#include <iostream>
#include <cmath>

long long ans[15][14] = {};

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::cout.precision(10);

	int N;
	std::cin >> N;

	// Base condition (note that room is room + 1)
	// Init floor 1
	for (int i = 0; i < 14; i++)
		ans[0][i] = (i + 1);
	// Init room 1
	for (int i = 0; i < 15; i++)
		ans[i][0] = 1;

	// Construction
	for (int i = 1; i < 15; i++)
	{ // floor
		for (int j = 1; j < 14; j++)
		{ // room
			ans[i][j] = ans[i-1][j] + ans[i][j-1];
		}
	}

	for (int i = 0; i < N; i++)
	{
		int f, r; // floor, room
		std::cin >> f >> r;

		std::cout << ans[f][r - 1] << '\n';
	}

	return 0;
}