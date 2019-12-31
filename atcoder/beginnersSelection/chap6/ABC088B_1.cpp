#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Problem https://atcoder.jp/contests/abc088/tasks/abc088_b

int solver(int aN,vector<int> cNum){
    int result;
    result = 0;
    int AScore,BScore;
    AScore = BScore = 0;
    sort(cNum.begin(),cNum.end(),greater<int>());
    for(int j=0;j<aN;j++){
        if( j%2 == 0){
            AScore = AScore+cNum.at(j);
        }
        else{
            BScore = BScore+cNum.at(j);
        }
    }
    // cout << "Alice Score: " << AScore << " Bob Score: " << BScore << endl;
    result = AScore - BScore;
    return result;
}

int main(void){
    int answer;
    int N;
    cin >> N;
    vector<int> A(N);
    for(int j=0;j<N;j++){
        cin >> A.at(j);
    }
    answer = solver(N,A);
    cout << answer << endl;
    return 0;
}