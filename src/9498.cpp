/* Copyright https://www.acmicpc.net/problem/9498
 * Test result
 * KangSK
 */

#include <iostream>

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n;
	std::cin >> n;
	if ((100 >= n) && (n >= 90))
		std::cout << "A\n";
	else if ((89 >= n) && (n >= 80))
		std::cout << "B\n";
	else if ((79 >= n) && (n >= 70))
		std::cout << "C\n";
	else if ((69 >= n) && (n >= 60))
		std::cout << "D\n";
	else
		std::cout << "F\n";
	return 0;
}