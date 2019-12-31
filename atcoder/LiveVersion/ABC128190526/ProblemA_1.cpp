#include<iostream>
using namespace std;

// https://atcoder.jp/contests/abc128/tasks/abc128_a

int solver(int apples,int chips){
    int result;

    result = ( apples * 3 + chips) / 2 ;
    return result;
}

int main(void){
    int answer ;
    int A,P;
    cin >> A >> P ;
    answer = solver(A,P);
    cout << answer << endl;
    return 0;
}