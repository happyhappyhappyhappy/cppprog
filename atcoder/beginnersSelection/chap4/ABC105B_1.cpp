#include<iostream>
#include<string>
using namespace std;

// https://atcoder.jp/contests/abc105/tasks/abc105_b

string solver(int total){
    string result;
    bool totalF=false; // トータルへ行きついたかどうか
    for(int fourD=0;fourD < 100;fourD++){
        for(int sevenD=0;sevenD < 100;sevenD++){
            int sum = 0;
            sum = fourD * 4 + sevenD * 7;
  //          cout << sum << endl;
            if(sum == total){
                totalF = true;
  //              cout << "End" << endl;
                break;
            }
        }
    } 
    if(totalF){
        result = "Yes";
    }
    else{
    result="No";
    }
    return result;
}

int main(void){
    int N;
    string answer;
    cin >> N;
    answer = solver(N);
    cout << answer << endl;
}