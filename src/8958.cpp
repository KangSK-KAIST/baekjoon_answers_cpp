/* Copyright https://www.acmicpc.net/problem/8958
 * OX Quiz
 * KangSK
 */

#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		int s = 0; // sum
		int a = 0; // current point acc
		std::string c;
		std::cin >> c;
		for (size_t i = 0; i < c.size(); i++)
		{
			char t = c[i];
			if (t == '\n')
				break;

			if (t == 'O')
				s += (++a);
			else if (t == 'X')
				a = 0;
		}
		std::cout << s << '\n';
	}

	return 0;
}