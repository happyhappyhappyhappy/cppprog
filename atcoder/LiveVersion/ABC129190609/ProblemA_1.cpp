#include<iostream>
using namespace std;
// Problem https://atcoder.jp/contests/abc129/tasks/abc129_a

int solver(int AB,int BC,int AC){
    int result=10000;
    int ABC,BAC,ACB;
    ABC = AB + BC;
    BAC = AB + AC;
    ACB = AC + BC;
    if(ABC < result){
        result = ABC;
    }
    if(BAC < result){
        result = BAC;
    }
    if(ACB < result){
        result = ACB;
    }
    return result;
}

int main(void){
    int P,Q,R;
    int answer=0;
    cin >> P >> Q >> R;
    answer = solver(P,Q,R);
    cout << answer << endl;
}