#include <bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int N,X;
    cin >> N >> X;
    int i;
    vector<int> b(N);
    vector<int> l(N);
    vector<int> u(N);

    vector<int> c(N);
    int sum = 0; 
    for(i=0;i<N;i++){
       cin >> b.at(i) >> l.at(i) >> u.at(i); 
       sum += b.at(i)*l.at(i);
    }
    sort(l.begin(), l.end());
    for(i=0;i<N;i++){
        cout << l.at(i) << endl;
    }
    int study = 0;
    int tmp = 0;
    for(i=0;i<N;i++){
        if(sum>X*l.at(N-i-1)){
            sum -= X*l.at(N-i-1);
            study +=  X;
        } else {
            tmp = sum / l.at(N-i-1);
            study += sum / l.at(N-i-1);
            sum -= tmp*l.at(N-i-1);
        }
        tmp = 0;
        cout << study<< " " << sum<<" "<<u.at(N-i-1)<<" "<<endl;
    }
    
    cout << study << endl;

    return 0;
}