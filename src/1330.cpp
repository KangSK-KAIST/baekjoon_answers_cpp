/* Copyright https://www.acmicpc.net/problem/1330
 * Comparing two numbers
 * KangSK
 */

#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int a, b;
	std::cin >> a >> b;
	if (a > b)
		std::cout << ">\n";
	else if (a == b)
		std::cout << "==\n";
	else
		std::cout << "<\n";
	return 0;
}