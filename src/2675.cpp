/* Copyright https://www.acmicpc.net/problem/2675
 * repeating strings
 * KangSK
 */

#include <iostream>
#include <string>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n;
	std::cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		int r; // repeat
		std::string s;
		std::cin >> r;
		std::cin >> s;

		for (size_t c = 0; c < s.size(); c++)
		{
			for (int j = 0; j < r; j++)
				std::cout << s[c];
		}
		std::cout << '\n';
	}

	return 0;
}