#include<iostream>
#define yes "YES"
#define no "NO"
using namespace std;

// Problem https://atcoder.jp/contests/abc060/tasks/abc060_b
// 2nd TRY


bool solver(int MULTI,int DEVIDEINT,int EQMOD){
    bool result;
    result = false;
    for(int j=1;j<=DEVIDEINT;j++){
        int checkNO;
        checkNO = (j * MULTI) % DEVIDEINT;
        if(checkNO == EQMOD){
            result = true;
            break;
        }
    }
    return result;
}

int main(void){
    bool answer;
    answer =false;
    int A,B,C;
    cin >> A >> B >> C;
    answer = solver(A,B,C);

    if(answer){
        cout << yes << endl;
    }
    else{
        cout << no << endl;
    }
    return 0;
}