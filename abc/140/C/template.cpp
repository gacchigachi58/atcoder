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
  vector<int> B(N);
  B[0] = 0;
  for (int i = 1; i < N; i++) {
    cin >> B[i];
  }
  vector<int> A(N);
  for (int i = 1; i < N-1; i++) {
    if (B[i] <= B[i + 1]) {
      A[i] = B[i];
    } else {
      A[i] = B[i + 1];
    }
  }
  A[0] = B[1];
  A[N - 1] = B[N - 1];
  //cout << A(N) << endl;
  int sum = 0;
  for (int i = 0; i < N;i++){
    //cout << A[i] << " ";
    sum += A[i];
  }
  cout << sum << endl;
}
