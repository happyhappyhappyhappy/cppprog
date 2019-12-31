#include<iostream>
#include<vector>
// 大文字小文字によるエラー回避用
#define yes "YES"
#define no "NO"
using namespace std;

// Problem https://atcoder.jp/contests/agc010/tasks/agc010_a
// Result https://atcoder.jp/contests/agc010/submissions/6799342
// 妙に今までの「合計が奇数」の戦略と比較してメモリが多くなった

/**
 * 戦略:2回目と変更
 * (要約) 奇数が奇数個ある場合false
 * (理由) もし偶数個あれば奇数は全部偶数に変わり、それらの偶数を足し合わしても偶数が
 * 1こづつ減って最終的には一つに収拾できるが、奇数個あると最終的には奇数一つ偶数一つになるため
 * 
 **/
bool solver(int allNumber,vector<long long int>A){
    bool result;
    int oddCount;
    oddCount = 0;
    result = true;
    /** for(int j=0;j<allNumber;j++){
        cout << A.at(j) << " ";
    }
    cout << endl;
    **/
   for(int j=0;j<allNumber;j++){
       if((A.at(j)%2)==1){
           oddCount = oddCount + 1;
       }
   }
   if ((oddCount%2)==1)
   {
       result=false;// 奇数の数が奇数個の場合のみ最後は2つ残るため結果は×になる
   }
    // それ以外は最初に設定した○のまま結果を返す
       return result;
}

int main(void){
    bool answer;
    int N;
    cin >> N;
    vector<long long int> Ai(N,0);
    for(int j=0;j<N;j++){
        cin >> Ai.at(j);
    }
    answer=solver(N,Ai);
    if(answer){
        cout << yes << endl;
    }
    else{
        cout << no << endl;
    }
}