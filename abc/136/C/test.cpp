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
	cin >> N;
	vector<int> H(N);
	int res = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> H[i];
	}
	int flag = 0;
	int flag1 = 0;
	for (int i = 0; i < N - 1; i++)
	{
		//for (int j = i; j < N;j++){
		if (flag1 == 1)
		{
			if (H.at(i + 1) < H.at(i))
			{
				flag = 1;
				cout << "No" << endl;
				break;
			}
			if (H.at(i + 1)-1 >= H.at(i))
			{
				flag1 = 0;
			}
		}
		else
		{
			if (H.at(i + 1) < H.at(i) - 1)
			{
				flag = 1;
				cout << "No" << endl;
				break;
			}
			else if (H.at(i + 1) == H.at(i) - 1)
			{
				flag1 = 1;
			}
		}
		//}
		//if(flag==1){
		//	break;
		//}
	}
	if (flag == 0)
	{
		cout << "Yes" << endl;
	}
}
