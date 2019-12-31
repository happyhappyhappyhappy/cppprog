#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

// Problem https://atcoder.jp/contests/abc086/tasks/arc089_a

bool solver(long int visitTime,vector<long int> t,vector<long int> x,vector<long int> y){
    bool result;
    result=true;
    for(long int j=1;j<visitTime+1;j++){
        // 移動時間より距離が短いかを調べる
        long int  dist,movetime;
        dist = abs(x.at(j)-x.at(j-1))+abs(y.at(j)-y.at(j-1));
        movetime = t.at(j)-t.at(j-1);
        if(movetime < dist){
            result=false;
            break;
        } // 移動時間の割には距離が長い場合はNG

        // 移動時間の偶奇が移動距離の偶奇が一致しているか確認
        // -> 1秒で1マス移動,2秒で2マス移動を考慮すると
        // 偶奇がそれぞれ異なる事は無い
        if((movetime%2) != (dist%2)){
            result=false;
            break;
        }

    }
    // 全部の移動に対して2つのポイントを満たしていれば最初に設定したtrueになる
    return result;
}

int main(void){
    bool answerside;
    answerside=false;
    long int N;
    cin >> N;
    vector<long int> t(N+1,0);
    vector<long int> x(N+1,0);
    vector<long int> y(N+1,0);
    for(int long j=1;j<N+1;j++){
        cin >> t.at(j) >> x.at(j) >> y.at(j);
    }
    answerside = solver(N,t,x,y);
    if(answerside){
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}