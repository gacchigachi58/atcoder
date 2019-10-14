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
	int A, B, C;
	cin >> A >> B >> C;
	if (C - (A - B) > 0)
	{
		cout << C - (A - B) << endl;
	}
	else
	{
		cout << 0 << endl;
	}
}
