#include <bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string s;
    cin >> s;
    //s = "ABCABC";
    int len = s.size();
    int i,l,k,m;
    int count = 0;
    for(i=len-1;i>1;i--){
        l = i-1;
        k = i-2;
        //m = i-3;
        if(s.at(i) == 'C' && s.at(l) == 'B' && s.at(k) == 'A'){
            s.at(i) = 'A';
            s.at(l) = 'C';
            s.at(k) = 'B';
            count++;
        }
        /*
        else if(s.at(i) == 'A' && s.at(l) == 'A' && s.at(k) == 'B' && s.at(m) == 'C'){
            s.at(i) = 'B';
            s.at(l) = 'C';
            s.at(k) = 'A';
            s.at(m) = 'A';
            count += 2;
            if(i==len-4) break;
        }*/
        cout << s  << " " << count << endl;
    }

    cout << count << endl;

    return 0;
}