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
	double r = 0;
	if(N%2 == 1){
		r = (double)(N+1)/2 / N;
	} else {
		r = (double)N/2/N;
	}

	cout << r << endl;	
}
