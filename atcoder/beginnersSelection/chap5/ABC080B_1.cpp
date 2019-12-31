#include<iostream>
using namespace std;

// Problem https://atcoder.jp/contests/abc080/tasks/abc080_b

int sumDigit(int gNum){
    int result=0;
    while(gNum>0){
        int gMod = gNum % 10;
        result = result + gMod;
        gNum = gNum / 10; 
    }
    return result;
}

string solver(int gNum){
    string result="No";
    int gMod;
    gMod = gNum % sumDigit(gNum);
    if(gMod == 0){
        result = "Yes";
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