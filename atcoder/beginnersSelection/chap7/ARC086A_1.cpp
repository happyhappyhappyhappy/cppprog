#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Problem https://atcoder.jp/contests/abc081/tasks/arc086_a

int solver(int allBall,int kindNum,vector<int> ballNo){
    int result=0;
    vector<int> bukket(allBall+1);
    for(int j=0;j<allBall;j++){
        bukket.at(ballNo.at(j)) = bukket.at(ballNo.at(j))+1;
    }
    sort(bukket.begin(),bukket.end(),greater<int>());
    for(int j=0;j<kindNum;j++){ 
        result = bukket.at(j)+result;
     } 
    result = allBall - result;
    return result;
}


int main(void){
    int answer=0;
    int N,K;
    cin >> N >> K;
    vector<int> Ai(N);
    for(int j=0;j<N;j++){
        cin >> Ai.at(j);
    }
    answer = solver(N,K,Ai);
    cout << answer << endl;
}