#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,A,B,C,D;
    string S;
    cin >> N >> A >> B >> C >> D;
    cin >> S;

    if(S.at()=='A') S.at(K-1) = 'a';
    else if(S.at(K-1)=='B') S.at(K-1) = 'b';
    else if(S.at(K-1)=='C') S.at(K-1) = 'c';

    cout << S << endl;

    return 0;
}