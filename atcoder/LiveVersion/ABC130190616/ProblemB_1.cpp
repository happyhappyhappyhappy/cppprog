#include<iostream>
#include<vector>
using namespace std;

// Problem https://atcoder.jp/contests/abc130/tasks/abc130_b

int main(void){
    int N,X;
    cin >> N >> X;
    vector<int> L(N+1);
    L.at(0)=0;
    for(int j=1;j<N+1;j++){
        int eL;
        cin >> eL;
        L.at(j)=L.at(j-1)+eL;
    }
    for(int j=0;j<N+1;j++){
        cout << L.at(j) << ",";
    }
    cout << endl;
}