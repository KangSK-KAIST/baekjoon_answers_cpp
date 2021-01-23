/* Copyright https://www.acmicpc.net/problem/2580
 * Sudoku
 * KangSK
 */

#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

int ans[81] = {};

bool checkUnique(int *group)
{
	bool isThere[9] = {false};
	for (int i = 0; i < 9; i++)
	{
		if (isThere[group[i] - 1])
			return false;
		isThere[group[i] - 1] = true;
	}
	return true;
}

int boxToXIndex(int box)
{
	switch (box)
	{
	case 0:
	case 3:
	case 6:
		return 0;
	case 1:
	case 4:
	case 7:
		return 1;
	case 2:
	case 5:
	case 8:
		return 2;
	default:
		return -1;
	}
}

int boxToYIndex(int box)
{
	switch (box)
	{
	case 0:
	case 1:
	case 2:
		return 0;
	case 3:
	case 4:
	case 5:
		return 1;
	case 6:
	case 7:
	case 8:
		return 2;
	default:
		return -1;
	}
}

bool checkSudoku(int *psudoku)
{
	// Check row
	for (int i = 0; i < 9; i++)
	{
		int piGroup[9];
		for (int j = 0; j < 9; j++)
			piGroup[j] = psudoku[i * 9 + j];
		if (!checkUnique(piGroup))
			return false;
	}
	// Check col
	for (int i = 0; i < 9; i++)
	{
		int piGroup[9];
		for (int j = 0; j < 9; j++)
			piGroup[j] = psudoku[j * 9 + i];
		if (!checkUnique(piGroup))
			return false;
	}
	// Check boxes
	for (int i = 0; i < 9; i++)
	{
		int piGroup[9];
		for (int j = 0; j < 9; j++)
			piGroup[j] = psudoku[(i / 3 * 3 + j / 3) * 9 + (i % 3) * 3 + j % 3];
		if (!checkUnique(piGroup))
			return false;
	}
	return true;
}

void backTrack(int *psudoku)
{
	bool checkSpace = false;
	for (int i = 0; i < 81; i++)
	{
		if (psudoku[i] == 0)
		{
			checkSpace = true;
			break;
		}
	}
	if (!checkSpace)
	{ // No space
		if (checkSudoku(psudoku))
		{
			for (int k = 0; k < 81; k++)
				ans[k] = psudoku[k];
			return;
		}
	}

	for (int i = 0; i < 81; i++)
	{
		if (psudoku[i] == 0)
		{ // Found empty box
			int by = i / 27;
			int bx = (i % 9) / 3;
			for (int p = 1; p <= 9; p++)
			{ // Predict
				bool pass = false;
				for (int t = 0; t < 9; t++)
				{
					// Check row
					if (psudoku[i] == p)
					{
						pass = true;
						break;
					}
					// Check col
					if (psudoku[i] == p)
					{
						pass = true;
						break;
					}
					// Check box
					if (psudoku[(by * 3 + t / 3) * 9 + bx * 3 + t % 3] == p)
					{
						pass = true;
						break;
					}
				}
				if (pass)
					continue;
				
				int pNewSudoku[81];
				for (int k = 0; k < 81; k++)
					pNewSudoku[k] = psudoku[k];
				pNewSudoku[i] = p;
				backTrack(pNewSudoku);
			}
			return;
		}
	}
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int sudoku[81] = {0};

	for (int i = 0; i < 81; i++)
		std::cin >> sudoku[i];
	std::cin.clear();

	backTrack(sudoku);

	for (int t = 0; t < 9; t++)
	{
		for (int u = 0; u < 9; u++)
			std::cout << ans[t * 9 + u] << ' ';
		std::cout << std::endl;
	}

	return 0;
}