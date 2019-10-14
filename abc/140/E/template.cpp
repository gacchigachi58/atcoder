#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
#define int long long
int MOD = 1000000007;
signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N, K;
  cin >> N >> K;
  string S;
  cin >> S;
  int score = 0;
  for (int i = 1; i < N; i++) {
    if (S.at(i-1) == 'L' && S.at(i) == 'L') {
      score++;
    } else if (S.at(i-1) == 'R' && S.at(i) == 'R') {
      score++;
    }
  }
  cout << score << endl;
}
