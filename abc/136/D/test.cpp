#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <stdio.h>
using namespace std;
#define int long long
int MOD = 1000000007;
signed main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int N;
	string S;
	cin >> S;
	N = S.size();
	vector<char> s(N);
	for (int i = 0; i < N; i++)
	{
		s.at(i) = S[i];
	}

	vector<int> p(N);
	vector<int> p1(N);
	for (int i = 0; i < N; i++)
	{
		p.at(i) = 1;
		p1.at(i) = 1;
	}
	int M;
	if (N % 2 == 0)
	{
		M = N + 1;
	}
	else
	{
		M = N;
	}
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (s.at(j) == 'R' && p.at(j) > 0)
			{
				p1.at(j) = p.at(j) - 1;
				p1.at(j + 1) = p.at(j + 1) + 1;
			}
			else if (s.at(j) == 'L' && p.at(j) > 0)
			{
				p1.at(j) = p.at(j) - 1;
				p1.at(j - 1) = p.at(j - 1) + 1;
			}
			p = p1;
			cout << p.at(j);
		}
		for (int i = 0; i < N; i++)
		{
			cout << p1.at(i);
		}
		cout << endl;
	}

	for (int i = 0; i < N; i++)
	{
		cout << p.at(i);
	}
	cout << M << endl;
}
