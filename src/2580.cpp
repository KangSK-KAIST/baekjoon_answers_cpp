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
			piGroup[j] = psudoku[(boxToYIndex(i) * 3 + boxToYIndex(j)) * 9 + boxToXIndex(i) * 3 + boxToXIndex(j)];
		if (!checkUnique(piGroup))
			return false;
	}
	return true;
}

void backTrack(int *psudoku)
{
	std::cout << "b\n";
	bool checkSpace = false;
	for (int i = 0; i < 81; i++)
	{
		if (psudoku[i] == 0)
			checkSpace = true;
	}
	if (!checkSpace && checkSudoku(psudoku))
	{
		for (int k = 0; k < 81; k++)
			ans[k] = psudoku[k];
		return;
	}

	std::cout << "-----------------------\n";
	for (int t = 0; t < 9; t++)
	{
		for (int u = 0; u < 9; u++)
			std::cout << psudoku[t * 9 + u] << ' ';
		std::cout << '\n';
	}

	for (int i = 0; i < 81; i++)
	{
		if (psudoku[i] == 0)
		{ // Found empty box
			int r = i / 9;
			int c = i % 9;
			int by = (r / 3) * 3;
			int bx = (c / 3) * 3;
			for (int p = 1; p <= 9; p++)
			{ // Predict
				bool pass = false;
				for (int t = 0; t < 9; t++)
				{
					// Check row
					if (psudoku[r * 9 + t] == p)
						pass = true;
					// Check col
					if (psudoku[t * 9 + c] == p)
						pass = true;
					// Check box
					if (psudoku[(boxToXIndex(bx) * 3 + boxToXIndex(t)) * 9 + (boxToYIndex(by) * 3 + boxToYIndex(t))] == p)
						p = true;
				}
				if (pass)
					continue;
				
				int pNewSudoku[81];
				for (int k = 0; k < 81; k++)
					pNewSudoku[k] = psudoku[k];
				pNewSudoku[i] = p;
				backTrack(pNewSudoku);
			}
		}
	}
}

int main(void)
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int sudoku[81] = {};

	for (int i = 0; i < 81; i++)
		std::cin >> sudoku[i];

	std::cout << "-----------------------\n";
	for (int t = 0; t < 9; t++)
	{
		for (int u = 0; u < 9; u++)
			std::cout << ans[t * 9 + u] << ' ';
		std::cout << '\n';
	}

	backTrack(sudoku);

	std::cout << "-----------------------\n";
	for (int t = 0; t < 9; t++)
	{
		for (int u = 0; u < 9; u++)
			std::cout << ans[t * 9 + u] << ' ';
		std::cout << '\n';
	}

	return 0;
}