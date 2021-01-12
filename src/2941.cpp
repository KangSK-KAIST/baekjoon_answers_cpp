/* Copyright https://www.acmicpc.net/problem/2941
 * croatian alphabet
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

	int N = s.size();
	int m = 0; // Count
	// Exploiting no special characters have same letters again (ex 'aa')
	for (int i = 0; i < N; i++)
	{
		char c = s[i];
		if ((c == 'c') && (s[(i + 1) % N] == '='))
			i++;
		if ((c == 'c') && (s[(i + 1) % N] == '-'))
			i++;
		if ((c == 'd') && (s[(i + 1) % N] == 'z') && (s[(i + 2) % N] == '='))
			i+=2;
		if ((c == 'd') && (s[(i + 1) % N] == '-'))
			i++;
		if ((c == 'l') && (s[(i + 1) % N] == 'j'))
			i++;
		if ((c == 'n') && (s[(i + 1) % N] == 'j'))
			i++;
		if ((c == 's') && (s[(i + 1) % N] == '='))
			i++;
		if ((c == 'z') && (s[(i + 1) % N] == '='))
			i++;
		m++;
	}

	std::cout << m << '\n';

	return 0;
}