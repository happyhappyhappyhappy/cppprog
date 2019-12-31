#include<iostream>
#define lli long long int
#define LONGMOD 1000000007
using namespace std;

// https://atcoder.jp/contests/abc055/tasks/abc055_b

lli solver(int TRAINING){
    lli result;
    result = 1;
    for(int j=1;j <= TRAINING ;j++){
        result = (result*j) % LONGMOD;
    }
    return result;
}

int main(void){
    lli answer;
    answer = 0;
    int N;
    cin >> N ;
    answer = solver(N);
    cout << answer << endl;
}