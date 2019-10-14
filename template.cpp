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
	int N, K;
	cin >> N >> K;
	vector<int> A(N);
	int res = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	int r = 0;
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		while (r < N && sum < K)
		{
			sum += A[r];
			r++;
		}
		if (sum >= K)
		{
			res += N - r + 1;
		}
		sum -= A[i];
	}

	cout << res << endl;
}
