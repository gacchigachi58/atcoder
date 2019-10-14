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
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  vector<int> B(N);
  for (int i = 0; i < N; i++) {
    cin >> B[i];
  }
  vector<int> C(N);
  for (int i = 0; i < N - 1; i++) {
    cin >> C[i];
  }
  //cout << B[3] << endl;
  int sum = 0;
  int tmp = 0;
  for (int i = 0; i < N; i++) {
    int j = A[i] - 1;
    sum += B[j];
    if (i != 0 && tmp == j - 1) {
      sum += C[tmp];
    }
    tmp = j;
    //cout << sum << endl;
  }

  cout << sum << endl;
  return 0;
}
