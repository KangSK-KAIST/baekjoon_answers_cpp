/* Copyright https://www.acmicpc.net/problem/1316
 * group word checker
 * KangSK
 */

#include <iostream>
#include <string>

bool checkGroup(std::string& s)
{
	bool flags[26] = {false, };
	char in = 0; // current alpha
	for (size_t i = 0; i < s.size(); i++)
	{
		char c = s[i];
		if (c != in)
		{ // New character
			if (flags[c - 'a'])
				return false;
			else
			{
				flags[c - 'a'] = true;
				in = c;
			}
		}	
	}
	return true;
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n;
	std::cin >> n;

	int m = 0;
	for (int i = 0; i < n; i++)
	{
		std::string s;
		std::cin >> s;

		if (checkGroup(s))
			m++;
	}
	std::cout << m << '\n';

	return 0;
}