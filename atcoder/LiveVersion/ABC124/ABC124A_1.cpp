#include<iostream>
using namespace std;
int main(void){
    int A,B;
    cin >> A >> B ;
    int bigB,smallB;
    if(A>=B){
        bigB=A;
        smallB=B;
    }
    else{
        bigB=B;
        smallB=A;
    }
    if(bigB==smallB)
    {
        int sumCoins;
        sumCoins = bigB+smallB;
        cout << sumCoins << endl;
    }
    else{
        int sumCoins;
        sumCoins = bigB+(bigB-1);
        cout << sumCoins << endl;
    }
    return 0;
}