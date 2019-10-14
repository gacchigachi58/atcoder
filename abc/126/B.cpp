#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    string S;
    cin >> S;

    int former, latter;
    former = atoi(S.substr(0,2).c_str());
    latter = atoi(S.substr(2,2).c_str());
    if(former==0) cout << "NA" << endl;
    else if(1<=former && former <13) {
        if(latter==0) cout << "NA" << endl;
        else if(1<=latter && latter<13) cout << "AMBIGUOUS" << endl;
        else cout << "MMYY" << endl;
    }
    else {
        if(latter==0) cout << "NA" << endl;
        else if(1<=latter && latter<13) cout << "YYMM" << endl;
        else cout << "NA" << endl;
    }
    
    return 0;
}