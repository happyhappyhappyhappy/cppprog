#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// https://atcoder.jp/contests/abc067/tasks/abc067_b

int solver(int allStick,int selStick,vector<int> eStick){
    int result;
    sort(eStick.begin(),eStick.end(),greater<int>());
    result = 0;
    for(int j=0;j<selStick;j++){
        result = result + eStick.at(j);
    }
    return result;
}

int main(void){
    int answer=0;
    int N,K;
    cin >> N >> K;
    vector<int> l(N);
    for(int j=0;j<N;j++){
        cin >> l.at(j);
    }
    answer = solver(N,K,l);
    cout << answer << endl;
}