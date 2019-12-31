#include<iostream>
#define lli long long int
using namespace std;

// Problem https://atcoder.jp/contests/abc048/tasks/abc048_b
// Ref https://atcoder.jp/img/arc064/editorial.pdf

lli f(lli NUMBER,lli x){
    lli result;
    result = 0;
    if(NUMBER == -1){
        result = 0;
    }
    else{
        result = (NUMBER / x) + 1;
    }

    return result;
}

int main(void){
    lli answer;
    answer = 0;
    lli a,b,x;
    cin >> a >> b >> x ;
    answer = f(b,x) - f(a-1,x);
    cout << answer << endl;
    return 0;
}
