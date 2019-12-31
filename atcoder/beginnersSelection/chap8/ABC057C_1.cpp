#include<iostream>
using namespace std;
// Problem https://atcoder.jp/contests/abc057/tasks/abc057_c

int digitC(long long  number){
    int result=0;
    long long checkNumber;
    checkNumber = number;
    while(checkNumber != 0){
        checkNumber = checkNumber / 10;
        result = result + 1;
    }
    return result;
}

int solver(long long  givenNumber){
    int result = 12; // 最大数は(1,10000000000)
    for(long long j=1;j*j<= givenNumber;j++){
        if(givenNumber % j !=0){
            continue;// Nで割れないAは条件に合わないので以下の処理を飛ばす
        }
        long long  bigNumber;
        bigNumber = givenNumber / j;
        int nowDigit=digitC(bigNumber);
        if(nowDigit<result){
            result = nowDigit;
        }
    }
    return result;
}

int main(void){
    long long N;
    int answer=0;
    cin >> N;
    answer = solver(N);
    cout << answer << endl;
}