#include<iostream>
#include<cmath>
#define loi long int
using namespace std;

// Problem https://atcoder.jp/contests/abc046/tasks/abc046_b

int main(void){
    loi answer;
    answer = 1;
    int N,K;
    cin >> N >> K;
    answer = K * pow(K-1,N-1);
    cout << answer << endl;
    return 0;

}