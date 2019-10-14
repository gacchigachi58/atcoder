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
    if(S[0]==S[1] || S[1]==S[2] || S[2]==S[3]){
        cout << "Bad" << endl;
    } else {
        cout << "Good" << endl;
    }
}
