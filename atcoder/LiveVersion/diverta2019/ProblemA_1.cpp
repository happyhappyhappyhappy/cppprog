#include<iostream>
using namespace std;

// Problem https://atcoder.jp/contests/diverta2019/tasks/diverta2019_a

int solver(int n,int c){
    int result = n -c +1;
    return result;
}

int main(void){
    int N,K,answer;
    cin >> N >> K ;
    answer = solver(N,K);
    cout << answer << endl;


}