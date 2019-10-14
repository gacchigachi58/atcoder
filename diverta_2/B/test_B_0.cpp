#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    vector<long> x(N);
    vector<long> y(N);
    cin >> N;

    for (size_t i = 0; i < N; i++){
        cin >> x.at(i) >> y.at(i);
    }

    vector<double> a(N*N/2+1);
    int count = 0;

    for (size_t i = 0; i < N-1; i++){
        for (size_t j = i+1; j < N; j++){
           // if(x.at(j) - x.at(i) != 0){
                a.at(count) = (double)(y.at(j) - y.at(i)) / (double)(x.at(j) - x.at(i));
                //cout << (double)((y.at(j) - y.at(i)) / (x.at(j) - x.at(i))) << endl;
                //cout << a.at(count)<<endl; 
                count++;
           // }
        }
    }
    
    double mode = 0;
    int maxCount = 0;

    for (int i = 0; i < count-1; i++){
        //double value = a.at(i);
        int c = 0;
        for (int j = i+1; j < count; j++){
            if(a.at(j) == a.at(i)){
                c++;
            }
        }
        if(c>maxCount){
            mode = a.at(i);
            maxCount = c;
        }
        
    }

    int cost = maxCount + 1;
    cout << cost << endl;
    
    return 0;
}