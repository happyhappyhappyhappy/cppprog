#include<iostream>
#include<cmath>
#include<vector>
// https://atcoder.jp/contests/abc125/tasks/abc125_b
// ref editrial https://img.atcoder.jp/abc125/editorial.pdf

using namespace std;
int solver(int allStone,vector<int> valueStone,vector<int> costStone){
    int result=0;
    for(int i = 0;i < allStone;i++){
        int tradeOff = 0;
        tradeOff = valueStone[i]-costStone[i];
        if(tradeOff > 0)
            {
                result = result + tradeOff;
            }
    }
    return result;
}

int main(void){
    int N;
    int result;
    cin >> N;
    vector<int> V(N);
    vector<int> C(N);
    for(int i=0;i<N;i++){
        cin >> V[i];
    }
    for(int i=0;i<N;i++){
        cin >> C[i];
    }
    
    result = solver(N,V,C);// 終了 2019/04/27 22:38
    cout << result << endl;
    return 0;
}