#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

// https://atcoder.jp/contests/abc042/tasks/abc042_b

string solver(int allStr,int astrLen,vector<string> strs){
    string result;
    result = "";
    sort(strs.begin(),strs.end());
    for(int j=0;j<allStr;j++){
        result = result + strs.at(j);
    }
    return result;
}

int main(void){
    int N,L;
    string answer;
    cin >> N >> L;
    vector<string> STI(N);
    for(int j=0;j<N;j++){
        cin >> STI.at(j);
    }
    answer = solver(N,L,STI);
    cout << answer << endl;

}