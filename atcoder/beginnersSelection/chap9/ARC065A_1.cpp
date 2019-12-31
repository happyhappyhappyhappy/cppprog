#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

// Problem https://atcoder.jp/contests/abc049/tasks/arc065_a

int main(void){
    string S,answer;
    vector<string> strs(4);
    answer = "YES";
    strs.at(0)="dream";
    strs.at(1)="dreamer";
    strs.at(2)="erase";
    strs.at(3)="eraser";
    cin >> S;
    reverse(S.begin(),S.end());
    for(int j=0;j<4;j++){
        reverse(strs.at(j).begin(),strs.at(j).end());
    }
/**     cout << S << endl;
    for(int j=0;j<4;j++){
        cout << strs.at(j) << " ";
    }
    cout << endl;**/
    bool cancut=true;
    for(int j=0;j<S.size();){
        bool cancutS=false;
        for(int k=0;k<4;k++){
            string checkingStr=strs.at(k);
            string checkedStr=S.substr(j,checkingStr.size());
            if(checkingStr == checkedStr){
                cancutS=true;
                j=j+checkedStr.size();}
        }
        if(cancutS == false){
            cancut=false;
            break;
        }
    }
    if(cancut){
        answer="YES";
    }
    else{
        answer="NO";}
    cout << answer << endl;
    return 0;
}
