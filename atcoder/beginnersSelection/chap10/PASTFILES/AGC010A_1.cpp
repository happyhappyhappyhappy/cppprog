#include<iostream>
using namespace std;
// Problem https://atcoder.jp/contests/agc010/tasks/agc010_a
// Reference https://atcoder.jp/img/agc010/editorial.pdf

// 「はい」「いいえ」形式の問題に対してスペルミスを防止するため
// 前もって宣言しておく
#define yes "YES"
#define no "NO"

/**
 * 戦略:奇数と奇数の和は偶数になるので奇数が二つ減り偶数が一つ増える
 * 偶数と偶数の和は偶数になるので偶数が一つ減る
 * 奇数が偶数個あれば奇数は全部偶数になり、この偶数を使えば最終的には一つになる
 * しかし、奇数個だと最後に奇数と偶数が一個ずつ残る
 * これを調べるには単純に全部の数を足して奇数か偶数か調べれば良い
 */
bool solver(int N){

    bool result;
    long long int sum;
    result = true;
    sum = 0;
    for(int j=0;j<N;j++){
        long long int A;
        cin >> A;
        sum = sum + A;
    }
    // cout << "sum=" << sum << endl;
    if(sum%2==0){
        result = true;
    }
    else{
        result = false;
    }
    return result;
}

int main(void){
    bool answer;
    answer = true;
    int N;
    cin >> N;
    answer = solver(N);
    if(answer){
        cout << yes << endl;
    }
    else{
        cout << no << endl;
    }
    return 0;
}