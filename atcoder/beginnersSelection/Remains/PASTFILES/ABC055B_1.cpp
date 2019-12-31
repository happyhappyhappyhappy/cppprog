#include<iostream>

#define MODINT 1000000007

using namespace std;

// Problem https://atcoder.jp/contests/abc055/tasks/abc055_b

int main(void){
    long long int answer;
    answer = 1;
    long int COUNT;
    cin >> COUNT;
    for(long int k=1;k<=COUNT;k++){
        answer = (answer * k) % MODINT;
    }
    cout << answer << endl;
    return 0;
}