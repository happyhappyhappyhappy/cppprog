#include<iostream>
using namespace std;

// Problem https://atcoder.jp/contests/abc083/tasks/abc083_b

int sumDigit(int n){
    int sum;
    sum = 0;
    while(n > 0){
        int oneDigit;
        oneDigit = n % 10;
        sum = sum + oneDigit;
        n = n / 10;
    }
    return sum;
}

int solver(int gInt,int sumFr,int sumTo){
    int result=0;
    for(int j=1;j <= gInt;j++){
        int aNum = sumDigit(j);
        if(sumFr <= aNum and aNum <= sumTo){
            result = result + j;
         //   cout << j << " SumDigit :" << aNum << endl;
            }
        }
//    result = gInt;
    return result;
}

int main(void){
    int N,A,B;
    int answer;
    cin >> N >> A >> B;
    answer = solver(N,A,B);
    cout << answer << endl;
}