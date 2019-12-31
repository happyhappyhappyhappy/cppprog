#include<iostream>
#include<cmath>

#define loi long int

using namespace std;

// Problem https://atcoder.jp/contests/abc046/tasks/abc046_b

loi solver(int BALLNUM,int PENKINUM){
    loi result;
    result = 1;
    result = PENKINUM * pow(PENKINUM-1,BALLNUM-1);
    return result;
}

int main(void){
    loi answer;
    answer = 0;
    int N,K;
    cin >> N >> K;
    answer = solver(N,K);
    cout << answer << endl;
    return 0;
}