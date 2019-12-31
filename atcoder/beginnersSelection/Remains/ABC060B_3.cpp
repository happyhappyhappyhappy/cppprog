#include<iostream>
#define yes "YES"
#define no "NO"
using namespace std;

// Problem https://atcoder.jp/contests/abc060/tasks/abc060_b
// 3rd C++ TRY

bool solver(int MULTIBASE,int DEVIDENUM,int MODNUM){
    bool result;
    result = false;
    for(int j=1;j<=DEVIDENUM;j++){
        int asmulti;
        asmulti = j * MULTIBASE;
        int asmultiMod;
        asmultiMod = asmulti % DEVIDENUM;
        if(asmultiMod == MODNUM){
            result = true;
            break;
        }
    }
    return result;
}

int main(void){
    bool answer;
    answer = false;
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