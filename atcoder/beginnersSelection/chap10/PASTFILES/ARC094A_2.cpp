#include<iostream>
#include<algorithm>
using namespace std;
// Problem https://atcoder.jp/contests/arc094/tasks/arc094_a

int solver(int A,int B,int C){
    int result;
    // inputCheck
    // cout << A << " " << B << " " << C << endl;
    result=0;
    // 戦略:下限まで操作すればよい。下限はまず3つの数の最大値がターゲットになる
    int dataMax=0;
    dataMax=max(A,max(B,C));// 同じ値へ合わせる3つの値の最大値を求める
    int remainValue=0;
    remainValue = (dataMax-A)+(dataMax-B)+(dataMax-C);
    // 操作によって埋められる値は両方とも2だけなので、埋めるべき値は偶数
    if(remainValue%2 == 0){
        // 偶数の場合は先に求めたremainValueを2で割ると回数になる
        result = remainValue / 2;
    }
    else{
        // もし奇数であれば(下限の値+1)まで埋めるとすれば解決する
        // 現remainValue(奇数)に3を足せば偶数になる
        // ここでは丁寧にdataMax+1まで埋めるとして計算する
        remainValue=(dataMax+1-A)+(dataMax+1-B)+(dataMax+1-C);
        result=remainValue / 2;
    }
    return result;
}

int main(void){
    int answer;
    answer=0;
    int A,B,C;
    cin >> A >> B >> C;
    answer=solver(A,B,C);
    cout << answer << endl;
}