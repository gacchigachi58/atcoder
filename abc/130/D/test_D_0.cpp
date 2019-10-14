#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    long K;
    cin >> N >> K;
    vector<int> a(N);
    for(int i=0;i<N;i++){
        cin >> a.at(i);
    }
    
    long sum = 0;
    long count = 0;

    for(int i=0;i<N;i++){       
        sum = a.at(i);
        if(sum>=K){
            count += N - i;
            continue;
        }
        for(int j=i;j<N;j++){
            if(j!=i){ 
                sum += a.at(j);
            }
            if(sum>=K){
                count += N - j;
                break;
            }
            //cout << i << " " << j << " " << count << endl;
        }
    }
    cout << count << endl;

    return 0;

}