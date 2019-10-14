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
    int N, L;
    cin >> N >> L;
    int aji = 0;
    int sum = 0;
    int min = 500;
    int min_aji = 0;
    for (int i = 1; i <= N; i++)
    {
        aji = L + i - 1;
        sum += aji;
        if(min>=abs(aji))
        {
            min = abs(aji);
            min_aji = aji;
        }
    }

    cout << sum - min_aji << endl;
}
