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
    int L, R;
    cin >> L >> R;

    int l, r;
    l = L % 2019;
    r = R % 2019;

    int ans;
    int min = 2019;
    if (l >= r)
    {
        min = 0;
    }
    else
    {
        if ((R-L) >= 2019)
        {
            min = 0;
        }
        else
        {
            for (int i = l; i < r; i++)
            {
                for (int j = i + 1; j <= r; j++)
                {
                    ans = (i * j) % 2019;
                    if (min >= ans)
                    {
                        min = ans;
                    }
                    if (min == 0)
                    {
                        break;
                    }
                }
            }
        }
    }
    cout << min << endl;
}