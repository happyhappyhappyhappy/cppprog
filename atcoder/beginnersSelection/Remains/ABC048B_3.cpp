#include<iostream>
#define lli long long int
using namespace std;

// Problem https://atcoder.jp/contests/abc048/tasks/abc048_b
// 3rd TRY

lli devfunc(lli N,lli X){
    lli result;
    result = 0;
    if(N !=-1){
        result = N / X + 1;
    }
    return result;
}

lli solver(lli A,lli B,lli DEVNO){
    lli result;
    result = 0;
    result = devfunc(B,DEVNO)-devfunc(A-1,DEVNO);
    return result;
}

int main(void){
    lli answer;
    answer=0;
    lli a,b,x;
    cin >> a >> b >> x;
    answer = solver(a,b,x);
    cout << answer << endl;
    return 0;
}