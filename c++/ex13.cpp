#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> score(N);
    int sum;
    sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> score.at(i);  
        sum += score.at(i); 
    }

    int ave;
    ave = sum/N;
    
    for(int i = 0; i < N; i++){
        if(score.at(i) >= ave) score.at(i) = score.at(i) - ave;
        else score.at(i) = ave - score.at(i);

        cout << score.at(i) << endl;
    }
    
    

}
