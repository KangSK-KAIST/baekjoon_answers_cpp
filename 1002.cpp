/* Copyright https://www.acmicpc.net/problem/1002
 * Turret
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

	int a_x, a_y, a_r, b_x, b_y, b_r;

	for (int i = 0; i < N; i++)
	{
		std::cin >> a_x >> a_y >> a_r >> b_x >> b_y >> b_r;

		if ((a_x == b_x) && (a_y == b_y))
		{ // The two turrets are the same points
			std::cout << ( (a_r == b_r)?"-1":"0" ) << '\n';
			continue;
		}

		// Distinct points
		double fDist = sqrt(pow(a_x - b_x, 2) + pow(a_y - b_y, 2));

		if (fDist > a_r + b_r)
			// Too far
			std::cout << '0' << '\n';
		else if (fDist == a_r + b_r)
			// Outer bounded
			std::cout << '1' << '\n';
		else
		{ // Close enough
			int iMax = (a_r > b_r) ? a_r : b_r;
			int iMin = (a_r <= b_r) ? a_r : b_r;

			if ((iMax - fDist) > iMin)
				// Too close
				std::cout << '0' << '\n';
			else if ((iMax - fDist) == iMin)
				// Inner bounded
				std::cout << '1' << '\n';
			else
				// Inner located
				std::cout << '2' << '\n';
		}
	}
	return 0;
}