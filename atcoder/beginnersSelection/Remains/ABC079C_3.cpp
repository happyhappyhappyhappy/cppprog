#include<iostream>
#include<bitset>
#include<string>
#include<vector>
using namespace std;

// Problem https://atcoder.jp/contests/abc079/tasks/abc079_c
// C++ 3rd Try
// AC https://atcoder.jp/contests/abc079/submissions/7924401
int zeroNum='0';
string solver(string givenNumber){
    string result;
    result.clear();
    vector<int> ticketNum(4,0);
    for(int j=0;j<4;j++){
        ticketNum[j]=(int)(givenNumber[j]-zeroNum);
    }
 //   for(int j=0;j<4;j++){
   //     cout << ticketNum[j] << ',';
//    }
 //   cout << endl;
    for(int bitPattern=0;bitPattern < (1 << 3);bitPattern++)
    {   
        int nowNumber;
        nowNumber=ticketNum[0];
        for(int scale=0;scale < 3;scale++){
            int nowChange = ticketNum[scale+1];
            int minusFlug = bitPattern & (1 << scale);
            // cout << minusFlug << endl;
            if(minusFlug == 0){
                nowNumber=nowNumber-nowChange;
            }
            else{
                nowNumber = nowNumber+nowChange;
            }
        }
        if(nowNumber == 7){ // この時のビットの値で+-作り、関数を返す
            result.push_back(ticketNum[0]+zeroNum);
            for(int scale=0;scale < 3;scale++){
                int nowChange=ticketNum[scale+1];
                int minusFlug = bitPattern & (1<<scale);
                if(minusFlug == 0){
                    result.push_back('-');
                }
                else{
                     result.push_back('+');
                }
                result.push_back(nowChange+zeroNum);
            }
            result.append("=7\n");
            break;
        }
    } 
    return result;
}

int main(void){
    string answer;
    answer.clear();
    string ABCD;
    cin >> ABCD;
    answer = solver(ABCD);
    cout << answer << endl;
}