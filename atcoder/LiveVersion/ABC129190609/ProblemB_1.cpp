#include<iostream>
#include<vector>
using namespace std;

// Problem https://atcoder.jp/contests/abc129/tasks/abc129_b

int main(void){
    int N;
    cin >> N ;
    vector<int> W(N);
    for(int j=0;j<N;j++){
        cin >> W.at(j);
    }
    vector<int> wdiff(N-1);
    int wsum=0;
    for(int j=0;j<N;j++){
        wsum = wsum + W.at(j);
    }
    for(int j=0;j<N-2;j++){
        // 累積和!!!!
    }
}