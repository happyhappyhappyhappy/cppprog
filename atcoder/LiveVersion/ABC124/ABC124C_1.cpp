#include<iostream>
#include<string>
using namespace std;
int main(void){
    string S;
    int strLength ;
    int counterA,counterB,answer;
    cin >> S;
    strLength = S.size();
    
    // 0101010101....のパターン
    int digits = 0;//開始桁
    int nowDigits;
    counterA = 0;
    for(int i=0;i < strLength;i++){
        nowDigits = S[i]-'0';
        if(digits != nowDigits){//現在の桁と白黒二値が一致していない場合
            counterA = counterA+1;
        }
      //次は0→1、1→0に入れ替え
        digits = (digits+1)%2;
    }
    /** 101010101010101....のパターン
    digits = 1;
    counterB = 0;
    for(int i=0;i<strLength;i++){
        cout << i << " ketameniHosiiDigits is " << digits << endl;
        nowDigits = S[i]-'0';
        if(digits =! nowDigits){
            cout << i << "KetaMenoDigitsGa" << "Org:" << nowDigits << "//To:" << digits <<"noTameHenkannsimasu" << endl;
            counterB = counterB+1;
        }
        digits = (digits+1)%2;
        cout << i+1 << "ketaMeni Hituyouna Digits is " << digits << endl;
    }
    cout << S << "to0....:" << counterA << endl;
    cout << S << "to1....:" << counterB << endl;**/
    // 1010101....の変換がうまくいかないため、一旦counterBという変数は010101変換関数の逆を行く
    counterB = strLength - counterA;
    if(counterB < counterA){
        answer = counterB;
    }
    else{// counterA <= counterB
        answer = counterA;
    }
    cout << answer   << endl;   
    return 0;
}