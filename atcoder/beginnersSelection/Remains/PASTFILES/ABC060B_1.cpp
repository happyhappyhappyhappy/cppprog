#include<iostream>
#define yes "YES"
#define no "NO"
using namespace std;


//  Problem https://atcoder.jp/contests/abc060/tasks/abc060_b
// 1st C++ Try
// Reference https://atcoder.jp/img/arc073/editorial.pdf

int main(void){
    bool answer;
    answer = false;
    int A,B,C;
    cin >> A >> B >> C;
    for(int j=1;j<=B;j++){
        int amari;
        amari = (j*A) % B;
        if(amari == C){
            answer=true;
        }
    }

    if(answer){
        cout << yes << endl;
    }
    else{
        cout << no << endl;
    }
    return 0;
}