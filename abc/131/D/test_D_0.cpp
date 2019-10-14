#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>
#include <set>
using namespace std;
typedef long long ll;
 
int main(void){
    ll n;
    vector<pair<ll, ll>> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        v.emplace_back(b, a);
    }
    sort(v.begin(), v.end());
    
    ll tmp = 0;
    for (int i = 0; i < n; i++) {
        tmp += v[i].second;
        if (tmp > v[i].first) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    
    
}