#include<iostream>
#include<string>
using namespace std;
// Problem https://atcoder.jp/contests/abc085/tasks/abc085_a
// ref https://qiita.com/drken/items/fd4e5e3630d0f5859067#%E7%AC%AC-2-%E5%95%8F--abc-081-a---placing-marbles-100-%E7%82%B9

string solve(string errorDate){
    errorDate[3]='8';
    return errorDate; 
}

int main(void){
    string errorDate,answerDate;
    cin >> errorDate;
    answerDate = solve(errorDate);
    cout << answerDate << endl;
    return 0;
}