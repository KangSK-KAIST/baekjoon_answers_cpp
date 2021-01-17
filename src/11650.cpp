/* Copyright https://www.acmicpc.net/problem/11650
 * Sort coordinates
 * KangSK
 */

#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

#define MAX_NUM 100000

class Coord;

class Coord
{
public:
	int x, y;

	bool operator<(const Coord &other) const
	{
		if (x != other.x)
			return (x < other.x);
		else
			return (y < other.y);
	}
};

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N;
	std::cin >> N;

	Coord c[MAX_NUM];

	for (int i = 0; i < N; i++)
	{
		int x, y;
		std::cin >> x >> y;
		
		c[i].x = x;
		c[i].y = y;
	}

	std::sort(c, c + N);

	for (int i = 0; i < N; i++)
		std::cout << c[i].x << ' ' << c[i].y << '\n';

	return 0;
}