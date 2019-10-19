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
	string S;
	cin >> S;
	string T;
	if(S=="Sunny"){
		T = "Cloudy";
	} else if(S=="Cloudy"){
		T = "Rainy";
	} else {
		T = "Sunny";
	}

	cout << T << endl;
}