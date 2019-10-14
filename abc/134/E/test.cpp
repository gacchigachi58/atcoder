#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <stdio.h>
using namespace std;
#define int long long
int MOD = 1000000007;
signed main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n;i++){
        cin >> a.at(i);
    }
    int count = 0;
    int flag = 0;

    for (int i = 0; i < a.size();i++){
        for (int j = i; j < a.size();j++){
            if(a.at(j)>a.at(i)){
               a.erase(a.begin() + j);
            } else {
                if(flag==0){
                   count++;
                   flag = 1;
               } 
            }
        }
        cout << count << " ";
        flag = 0;
    }

        /*for (int i = 0; i < n;i++){
        if(a.at(i)<0){
            continue;
        }
        for (int j = i; j < n;j++){
            if(a.at(j)<0){
                continue;
            }
            else if(a.at(j)>a.at(i)){
                a.at(j) = -1;
            } else {
                if(flag==1){
                    continue;
                } else {
                    count++;
                    flag = 1;
                }
            }
        }
        flag = 0;*/
        /*
        if(flag==1){
            count++;
            flag = 0;
        } */
        //cout << count << " ";
    //}

    cout << count << endl;
}
