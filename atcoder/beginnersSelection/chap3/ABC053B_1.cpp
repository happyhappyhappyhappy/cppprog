#include<iostream>
#include<string>
using namespace std;
// Problem https://atcoder.jp/contests/abc053/tasks/abc053_b
// Reference https://atcoder.jp/img/arc068/editorial.pdf

int solver(string iStr){
    int aPos,zPos,result;
    int iStrLeng=iStr.size();
    aPos = 0;
    zPos = iStrLeng;
    // Aは一番左にある物の位置
    for(int j=0;j<iStrLeng;j++){
        if(iStr.at(j)=='A'){
            aPos = j;
            break;
        }
    }
    for(int j=iStrLeng-1;-1 < j;j--){
        if(iStr.at(j) =='Z'){
            zPos = j;
            break;
        }
    }
    // cout << "A:" << aPos << ",Z:" << zPos << endl;
    result = zPos - aPos +1; // 文字自身も含む為
    return result;
}

int main(void){
    int answer;
    string s;
    cin >> s;
    answer = solver(s);
    cout << answer << endl;
}