/* Copyright https://www.acmicpc.net/problem/1193
 * finding fractions
 * KangSK
 */

#include <iostream>
#include <cmath>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::cout.precision(10);

	int N;
	std::cin >> N;

	// n = (s - 1) * s / 2
	// s^2 - s - 2n = 0
	// (1 + sqrt(1 + 8n)) / 2

	int s = ceil((1.0 + sqrt(1.0 + 8.0 * (double)N)) / 2.0); // sum

	int n, d;
	if (s % 2 == 0)
	{
		d = N - (s - 2) * (s - 1) / 2; // denominator
		n = s - d;					   // numerator
	}
	else
	{
		n = N - (s - 2) * (s - 1) / 2; // numerator
		d = s - n;					   // denominator
	}

	std::cout << n << '/' << d << '\n';

	return 0;
}