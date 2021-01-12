/* Copyright https://www.acmicpc.net/problem/10809
 * Finding alphabets
 * KangSK
 */

#include <iostream>
#include <string>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int iPos[26] = {};
	for (int i = 0; i < 26; i++)
		iPos[i] = -1;

	std::string s;
	std::cin >> s;

	int f = 0; // first
	for (size_t i = 0; i < s.size(); i++)
	{
		char c = s[i];

		if (iPos[c - 'a'] == -1)
			iPos[c - 'a'] = f;
		f++;
	}
	for (int i = 0; i < 25; i++)
		std::cout << iPos[i] << ' ';
	std::cout << iPos[25] << '\n';

	return 0;
}