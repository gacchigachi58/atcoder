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
int MAX = 1000000000;
signed main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int s;
    cin >> s;
    int x2, x3, y2, y3;

    for (x2 = MAX; x2 >= 1; x2--)
    {
        if (s % x2 == 0)
        {
            y3 = s / x2;
            x3 = 0;
            y2 = 0;
            break;
        }
        else
        {
            x3 = x2 - (s % x2);
            y2 = 1;
            y3 = (s + x3) / x2;

            break;
        }
    }

    cout << 0 << " " << 0 << " " << x2 << " " << y2 << " " << x3 << " " << y3 << endl;
}