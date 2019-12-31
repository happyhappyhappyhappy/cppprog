#include<iostream>
#include<vector>
using namespace std;
// https://atcoder.jp/contests/abc081/tasks/abc081_b

int solver(int allNumber,vector<int> numbers){
    int solverAns=0;
    bool evenFlag=true;
    while(true){
        for(int j=0;j<allNumber;j++){
            int mods;
            mods = numbers.at(j)%2;
            if(mods !=0)evenFlag=false;
        }
        if(evenFlag==true){
            // すべて2で割る
            for(int j=0;j<allNumber;j++){
                numbers.at(j) = numbers.at(j) / 2;    
            }
            solverAns = solverAns+1;
        }
        else{
            break;// そのまま終了
        }
    }
    return solverAns;
}
int main(void){
    int N;
    cin >> N ;
    vector<int> A(N+10,0);
    for(int j=0;j<N;j++){
        cin >> A.at(j);
    }
    int answer = solver(N,A);
    cout << answer << endl;
    return 0;
}