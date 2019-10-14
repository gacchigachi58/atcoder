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
    int tmp = N;
    int count=0;
	while(tmp>=1){
        tmp /= 10;
        count++;
    }
    switch(count){
        case(1):
        cout << N << endl;
        break;
        case(2):
        cout << 9 << endl;
        break;
        case(3):
        cout << 9+(N-99) << endl;
        break;
        case(4):
        cout << 9+999-99 << endl;
        break;
        case(5):
        cout << 9+999-99+(N-9999)<< endl;
        break;
        case(6):
        cout << 9+999-99+99999-9999<< endl;
        break;
    }
    return 0;
}
