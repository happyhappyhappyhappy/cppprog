#include<iostream>
#include<string>
using namespace std;
/** 10101010...　の文字列がうまく出ないので検証してみた2019/04/18 **/
// 元問題 https://atcoder.jp/contests/abc124/tasks/abc124_c
int main(void){
    int hosiiketa;
    cin >> hosiiketa;
 
    // 0101010101....のパターン
    int digits = 0;//開始桁
    int nowDigits;
    cout << "01010101...Pattern" << endl; 
    for(int i=0;i < hosiiketa ;i++){
        cout << digits << endl;
        digits = (digits+1)%2; // ここがポイント
    }
    digits = 1;//開始桁
    cout << "1010101001...Pattern" << endl;
    for(int i=0;i<hosiiketa;i++){
        cout << digits << endl;
        digits = (digits+1)%2;
    }
    return 0;
}