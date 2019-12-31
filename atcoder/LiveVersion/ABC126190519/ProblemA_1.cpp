#include<iostream>
#include<string>
using namespace std;

// https://atcoder.jp/contests/abc126/tasks/abc126_a

string solver(string inS,int pos){
    string answer;
    inS.at(pos-1) = inS.at(pos-1)+32;
    answer = inS;
    return answer;
}

int main(void){
    int N,K;
    string result;
    cin >> N >> K ;
    string S;
    cin >> S;
    result = solver(S,K);
    cout << result << endl;
}