/* Copyright https://www.acmicpc.net/problem/10757
 * Adding big numbers
 * KangSK
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::cout.precision(10);

	std::string N, M;
	std::cin >> N >> M;

	std::reverse(N.begin(), N.end());
	std::reverse(M.begin(), M.end());

	std::string ans = "";
	int c = 0; // carry
	for (size_t i = 0; i < std::max(N.size(), M.size()); i++)
	{
		int n = ((i < N.size()) ? N[i] : '0') - '0';
		int m = ((i < M.size()) ? M[i] : '0') - '0';
		int t = n + m + c;
		ans.push_back(t % 10 + '0');
		c = (t >= 10) ? 1 : 0;
	}

	if (c == 1)
		ans.push_back('1');

	std::reverse(ans.begin(), ans.end());
	std::cout << ans << '\n';

	return 0;
}