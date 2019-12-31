#include<iostream>
#include<vector>
using namespace std;

// Problem https://atcoder.jp/contests/diverta2019-2/tasks/diverta2019_2_a

int main(void){
    int N,K;
    cin >> N >> K;
    int all1rem;
    all1rem = N - K;
    int answer;
    answer = all1rem;
    if( K == 1){
        answer=0;
    }
    cout << answer << endl;

}