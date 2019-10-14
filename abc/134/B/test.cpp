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
	int n,d;
    cin >> n >> d;
    int range = 2 * d + 1;
    int monitor;
    if(n%range==0){
        monitor = n / range;
    } else {
        monitor = n / range + 1;
    }
    cout << monitor << endl;
}
