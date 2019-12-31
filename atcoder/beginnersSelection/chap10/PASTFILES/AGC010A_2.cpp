#include<iostream>

using namespace std;

// 判定問題用
#define yes "YES"
#define no "NO"
// 短縮実験(Aiが10^9までなので)
// #define long long int lli -> 失敗

// Problem https://atcoder.jp/contests/agc010/tasks/agc010_a
/**
 * 戦略:偶数+偶数なら答えも偶数→1操作につき1つ偶数削除
 * 奇数+奇数なら答えは偶数→1操作につき奇数が2こ削除偶数が1つ追加
 * 偶数だけなら最後は1つまで削除、奇数は偶数個あれば全部偶数だけになり他の偶数に混ざるが
 * 奇数個であると最後に「奇数が」1つだけ残る。偶数も1つだけ残る。
 * よって奇数が奇数個あるかないか調べれば良い
 * かりに奇数が奇数個あれば 全数の合計が 奇数*奇数+偶数*(偶数or奇数)でこれば奇数になるので
 * この数で判定できる
 */
bool solver(int number){
    bool result;
    result = true;
    long long int allSum;
    long long int inputNo;
    allSum=0;
    for(int j=0;j<number;j++){
        inputNo=0;
        cin >> inputNo;
        allSum = allSum+inputNo;
    }
    if(allSum % 2 == 1){ // 合計が奇数の時2つ必ず残る
        result = false;
    }
    return result;
}

int main(void){
    bool answer;
    answer= true;
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