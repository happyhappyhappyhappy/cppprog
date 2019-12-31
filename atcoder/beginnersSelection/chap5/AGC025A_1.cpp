#include<iostream>
using namespace std;
// Problem https://atcoder.jp/contests/agc025/tasks/agc025_a

int sumDigit(int N){
    int result=0;
    while(N>0){
        int edigit;
        edigit=N%10;
        result = result + edigit;
        N=N/10;
    }
    return result;
}
int solve(int N){
    int result=100000000;
 //   for(int j=2;j<=N-2;j++){
     for(int j=1;j<N;j++){
        int A,B,abSum;
        A = j;
        B = N - j;
        abSum = sumDigit(A) + sumDigit(B);
        if(abSum < result){
            result = abSum;
        }
    }
    return result;
}
int main(void){
    int N;
    int answer;
    cin >> N;
    answer = solve(N);
    cout << answer << endl;
}
