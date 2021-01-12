/* Copyright https://www.acmicpc.net/problem/1152
 * counting words
 * KangSK
 */

#include <iostream>
#include <string>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	std::string s;
	std::getline(std::cin, s);
	
	int c = 0; // Count
	bool in = false; // in word
	for (size_t i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ')
			in = false;
		else
		{
			if (!in)
				c++;
			in = true;
		}
	}
	std::cout << c << '\n';

	return 0;
}