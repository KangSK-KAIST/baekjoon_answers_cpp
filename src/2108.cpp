/* Copyright https://www.acmicpc.net/problem/2108
 * Statistics
 * KangSK
 */

#include <iostream>
#include <array>
#include <algorithm>
#include <cmath>

#define NUM_MAX 5000000
#define MAXIMUM 4000

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N;
	std::cin >> N;

	std::array<int, 2 * MAXIMUM + 1> n = {};

	int min = MAXIMUM;
	int max = -1 * MAXIMUM;
	double avg = 0.0;
	for (int i = 0; i < N; i++)
	{
		int t;
		std::cin >> t;

		avg += (double)t / (double)N;
		min = (t < min) ? t : min;
		max = (t > max) ? t : max;
		n[t + MAXIMUM]++;
	}

	int median = 0;
	int c = 0;
	for (int i = 0; i < 2 * MAXIMUM + 1; i++)
	{
		c += n[i];
		if (c >= (N / 2 + 1))
		{
			median = i - MAXIMUM;
			break;
		}
	}

	int mode;
	int max_mode = 0;
	bool second = false;
	for (int i = 0; i < 2 * MAXIMUM + 1; i++)
	{
		if (n[i] > max_mode)
		{
			mode = i - MAXIMUM;
			second = false;
			max_mode = n[i];
		}
		else if (n[i] == max_mode)
		{
			if (!second)
			{ // fill second
				mode = i - MAXIMUM;
				second = true;
			}
		}
	}

	std::cout << std::round(avg) << '\n';
	std::cout << median << '\n';
	std::cout << mode << '\n';
	std::cout << max - min << '\n';

	return 0;
}
