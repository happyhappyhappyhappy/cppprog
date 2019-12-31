#include<iostream>
#include<string>
#include<bitset>

using namespace std;
// Problem https://atcoder.jp/contests/abc079/tasks/abc079_c
// Reference https://atcoder.jp/contests/abc079/submissions/1789911
// Try C++ 1st

int main(void){
    string ABCD;
    cin >> ABCD;
    for(int bit=0;bit<8;bit++){
        int tmp;
        tmp = (int)(ABCD.at(0)- '0');
        for(int j=0;j<3;j++){
            int tmp2=0;
            tmp2 = (int)(ABCD.at(j+1)-'0');
//            cout << "j Before :" << j;
            int k =  1 << j ;
//            cout << " [1 << j ]After : " << j << endl;
            int checkFlag;
            checkFlag = k & bit;
//            cout << bitset<3>(k) << " " << bitset<3>(bit) << " & = " << bitset<3>(checkFlag) << endl;
            if(checkFlag){
//                cout << bitset<3>(checkFlag) << " is though" << endl;
                tmp = tmp + tmp2;
            }
            else{
                tmp = tmp - tmp2;
            } // else
        } // for j=0
        if(tmp == 7){
            //   cout << bit << " is SUM = 7" << endl;
            string answer;
            answer.push_back(ABCD.at(0));
            for(int j=0;j<3;j++){
                int k = 1 << j;
                // int plusFlag = bit and k;
                int plusFlag = bit & k;
                if(0 < plusFlag){
                    answer.push_back('+');
                }
                else{
                    answer.push_back('-');
                }// if(0 < plusFlag)
                answer.push_back(ABCD.at(j+1));
            }// for(int j=0...)
            answer.push_back('=');
            answer.push_back('7');
            answer.push_back('\n');
            cout << answer;
            break; // 全部出したければこの文をコメントアウト
        } // tmp == 7
    } // for int bit=0
    return 0;
}