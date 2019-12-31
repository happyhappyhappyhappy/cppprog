#include<iostream>
#include<cmath>
#define loi long int

using namespace std;

// Problem https://atcoder.jp/contests/abc046/tasks/abc046_b

loi solver(int BALL,int PAINTCOLOR){
    loi result;
    result = 0;
    result = PAINTCOLOR * pow(PAINTCOLOR-1,BALL-1);
    return result;
}

int main(void){
    loi answer;
    answer = 0;
    int N,K;
    cin >> N >> K;
    answer = solver(N,K);
    cout << answer << endl;
}

