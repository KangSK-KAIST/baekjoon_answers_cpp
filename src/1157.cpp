/* Copyright https://www.acmicpc.net/problem/1157
 * studying words
 * KangSK
 */

#include <iostream>
#include <string>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	std::string s;
	std::cin >> s;

	int ans[26] = {};
	for (size_t i = 0; i < s.size(); i++)
	{
		char c = s[i];
		if (('a' <= c) && (c <= 'z'))
			ans[c - 'a']++;
		if (('A' <= c) && (c <= 'Z'))
			ans[c - 'A']++;
	}

	int m = -1; // Max
	int p; // Position
	bool u = true; // Unique
	for (int i = 0; i < 26; i++)
	{
		if (ans[i] == m)
			u = false;
		else if (ans[i] > m)
		{
			m = ans[i];
			p = i;
			u = true;
		}
	}

	if (u)
		std::cout << (char)(p + 'A') << '\n';
	else
		std::cout << "?\n";

	return 0;
}