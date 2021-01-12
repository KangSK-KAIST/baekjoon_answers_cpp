/* Copyright https://www.acmicpc.net/problem/15596
 * function sum
 * KangSK
 */

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

long long sum(std::vector<int> &a)
{
	return std::accumulate(a.begin(), a.end(), (long long)0);
}