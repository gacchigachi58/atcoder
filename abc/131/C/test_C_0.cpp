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
#include <numeric>
using namespace std;
#define int long long
int MOD = 1000000007;

long euclidean_gcd(long a, long b) {
  if(a < b) return euclidean_gcd(b, a);
  long r;
  while ((r=a%b)) {
    a = b;
    b = r;
  }
  return b;
}
long lcm(long p, long q)
{
    return p * q / euclidean_gcd(p, q);
}
signed main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long A, B;
    long C, D;
    cin >> A >> B >> C >> D;

    long Qbc = B / C;
    long Qac = (A - 1) / C;
    long Qbd = B / D;
    long Qad = (A - 1) / D;

    long Qbcd = B / lcm(C, D);
    long Qacd = (A - 1) / lcm(C, D);

    long count = (B - A + 1) - (Qbc - Qac) - (Qbd - Qad) + (Qbcd - Qacd);

    cout << count << endl;
}
