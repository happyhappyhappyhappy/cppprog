#include<iostream>
#include<string>
using namespace std;

// https://atcoder.jp/contests/abc081/tasks/abc081_a

int getOneCounter(string inputString){
    int counter = 0;
    if(inputString[0] - '0' == 1)counter = counter+1;
    if(inputString[1] - '0' == 1)counter = counter+1;
    if(inputString[2] - '0' == 1)counter = counter+1;
    return counter;
}

int main(void){
    string squareBoard;
    int ans;
    cin >> squareBoard;
    ans = getOneCounter(squareBoard);
    cout << ans << endl;
    return 0;
}