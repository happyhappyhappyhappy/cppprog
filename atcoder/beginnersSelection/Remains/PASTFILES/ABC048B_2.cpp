#include<iostream>
#define lli long long int
using namespace std;
// Problem https://atcoder.jp/contests/abc048/tasks/abc048_b
// Reference https://atcoder.jp/contests/abc048/submissions/1014095
// C++ 2nd mission
lli solver(lli A,lli LARGEA,lli DEVIDE){
    lli result;
    result = 0;
    result = (LARGEA+DEVIDE) / DEVIDE - ( A - 1 + DEVIDE ) / DEVIDE; 
    return result;
}


int main(void){
    lli answer;
    answer = 0;
    lli a,b,x;
    cin >> a >> b >> x;
    answer=solver(a,b,x);
    cout << answer << endl;
    return 0;
}