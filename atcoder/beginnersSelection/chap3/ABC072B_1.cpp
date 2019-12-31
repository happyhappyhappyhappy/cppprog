#include<iostream>
#include<string>
using namespace std;
// https://atcoder.jp/contests/abc072/tasks/abc072_b

string solver(string iStr){
    int sLeng = iStr.size();
    string result="";
    // cout << "Length:" << sLeng << endl;
    for(int j=0;j<sLeng;j++){
        if(j%2==0){
            result.append(iStr,j,1);
            // cout << "Now Result:" << result << endl;
        }
    }
    return result;
} 

int main(void){
    string s,answer;
    cin >> s;
    answer = solver(s);
    cout << answer << endl;
    return 0;
}