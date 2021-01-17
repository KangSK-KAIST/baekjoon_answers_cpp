/* Copyright https://www.acmicpc.net/problem/1181
 * Sort coordinates 2
 * KangSK
 */

#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

#define MAX_NUM 20000

class Word;

class Word
{
public:
	std::string word;

	bool operator<(const Word &other) const
	{
		if (word.length() != other.word.length())
			return (word.length() < other.word.length());
		else
			return (word < other.word);
	}
};

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int N;
	std::cin >> N;

	Word c[MAX_NUM];

	for (int i = 0; i < N; i++)
	{
		std::string s;
		std::cin >> s;

		c[i].word = s;
	}

	std::sort(c, c + N);

	std::string prev = "";
	for (int i = 0; i < N; i++)
	{
		if (c[i].word != prev)
		{
			std::cout << c[i].word << '\n';
			prev = c[i].word;
		}
	}

	return 0;
}