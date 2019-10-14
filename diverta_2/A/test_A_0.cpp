#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,K;
    cin >> N >> K;
    if(K==1 || N==K){
        cout << 0 << endl;
    } else if(N>K){
        cout << N - K << endl;
    } 
    
    return 0;
}