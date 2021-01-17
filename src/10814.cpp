/* Copyright https://www.acmicpc.net/problem/1181
 * Sort coordinates 2
 * KangSK
 */

#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

#define MAX_NUM 100000

class Person;

class Person
{
public:
	int age, time;
	std::string name;

	bool operator<(const Person &other) const
	{
		if (age != other.age)
			return (age < other.age);
		else
			return (time < other.time);
	}
};

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N;
	std::cin >> N;

	Person c[MAX_NUM];

	for (int i = 0; i < N; i++)
	{
		int a;
		std::string s;
		std::cin >> a >> s;

		c[i].age = a;
		c[i].time = i;
		c[i].name = s;
	}

	std::sort(c, c + N);

	for (int i = 0; i < N; i++)
		std::cout << c[i].age << ' ' << c[i].name << '\n';
	return 0;
}