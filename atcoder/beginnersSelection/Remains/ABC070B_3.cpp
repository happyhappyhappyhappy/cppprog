#include<iostream>
#include<algorithm>

using namespace std;

// Problem https://atcoder.jp/contests/abc070/tasks/abc070_b

int solver(int ASTART,int ASTOP,int BSTART,int BSTOP){
    int result;
    result = 0;
    int switchingtime;
    switchingtime = min(ASTOP,BSTOP)-max(ASTART,BSTART);
    if(0 < switchingtime){
        result = switchingtime;
    }
    return result;
}

int main(void){
    int A,B,C,D;
    int answer;
    answer = 0;
    cin >> A >> B >> C >> D;
    answer = solver(A,B,C,D);
    cout << answer;
    return 0;
}