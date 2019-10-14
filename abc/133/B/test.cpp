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
  int N, D;
  cin >> N >> D;
  vector<vector<int>> X(N, vector<int>(D));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < D; j++) {
      cin >> X.at(i).at(j);
    }
  }

  int distance = 0;
  int count = 0;
  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {
      for (int k = 0; k < D; k++) {
        distance += pow(X.at(i).at(k) - X.at(j).at(k), 2);
      }
      if (pow((int)(sqrt(distance)), 2) == distance) {
        count++;
      }
      distance = 0;
    }
  }

  cout << count << endl;
}
