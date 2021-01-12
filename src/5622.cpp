/* Copyright https://www.acmicpc.net/problem/5622
 * dial
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

	int i = 0; // sum
	for (size_t j = 0; j < s.size(); j++)
	{
		char c = s[j];
		if (('A' <= c) && (c <= 'C'))
			i += 3;
		else if (('D' <= c) && (c <= 'F'))
			i += 4;
		else if (('G' <= c) && (c <= 'I'))
			i += 5;
		else if (('J' <= c) && (c <= 'L'))
			i += 6;
		else if (('M' <= c) && (c <= 'O'))
			i += 7;
		else if (('P' <= c) && (c <= 'S'))
			i += 8;
		else if (('T' <= c) && (c <= 'V'))
			i += 9;
		else
			i += 10;
	}

	std::cout << i << '\n';

	return 0;
}