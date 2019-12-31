#include<iostream>
#include<string>
using namespace std;

// https://atcoder.jp/contests/abc126/tasks/abc126_b

string solver(string iStr){
    string result;
    int intDis;
    int aDigit,bDigit;
    bool aMonth=false;
    bool bMonth=false;
    intDis = stoi(iStr);
    aDigit = intDis / 100;
    bDigit = intDis % 100;
    if( 0 < aDigit and aDigit <= 12){
        aMonth = true;
    }
    if( 0 < bDigit and bDigit <= 12){
        bMonth = true;
    }
    if( aMonth == true and bMonth == true){
        result ="AMBIGUOUS";
    }
 if( aMonth == true and bMonth == false){
        result ="MMYY";
    }
     if( aMonth == false and bMonth == true){
        result ="YYMM";
    }
     if( aMonth == false and bMonth == false){
        result ="NA";
    }

    return result;
}

int main(void){
    string answer;
    string S;
    cin >> S ;
    answer = solver(S);
    cout << answer << endl;
}