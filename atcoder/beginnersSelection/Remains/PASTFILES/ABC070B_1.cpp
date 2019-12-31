#include<iostream>
#include<algorithm>

using namespace std;

// Problem https://atcoder.jp/contests/abc070/tasks/abc070_b
// Reference https://atcoder.jp/contests/abc070/submissions/1798711
// Reference https://img.atcoder.jp/abc070/editorial.pdf

int main(void){
    int A,B,C,D;
    int answer;
    cin >> A >> B >> C >> D;
    int banddmin = min(B,D);
    int aandcmax = max(A,C);
    int difftime = banddmin-aandcmax;
    if(0 < difftime){
        answer = difftime;
    }
    else{
        answer = 0;
    }
    cout << answer << endl;
}