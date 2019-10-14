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
	int N, A, B;
	cin >> N >> A >> B;
	int min;
    if(N*A >= B){
        min = B;
    } else {
        min = N*A;
    }
    cout << min << endl;
}
