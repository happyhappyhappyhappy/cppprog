#include<iostream>
#include<cmath>
#define lli long long int
// #define MODINT 1000000007
using namespace std;

// Problem https://atcoder.jp/contests/abc055/tasks/abc055_b
lli solver(int TRAINING){
    lli result;
    result = 1;
    const lli MODINT = pow(10,9)+7;
    for(int j=1;j< (TRAINING+1);j++){
        result = (result * j) % MODINT;
    }
    return result;
}

int main(void){
    lli answer;
    answer = 0;
    int N;
    cin >> N;
    answer = solver(N);
    cout << answer << endl;
    return 0;
}