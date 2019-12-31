#include<iostream>
using namespace std;

// Problem https://atcoder.jp/contests/abc087/tasks/abc087_b

int solver(int fhundY,int hundY,int fiftyY,int total){
    int result=0;
    // 全パターン求める
    for(int j=0;j < fhundY+1;j++){
        for(int k=0;k < hundY+1;k++){
            for(int m=0; m < fiftyY+1 ; m++ ){
                int sum = j * 500 + k * 100 + m *50;
                if(sum==total) result=result+1;
            }
        }
    }
    return result;
}

int main(void){
    int A,B,C,X,answer;
    cin >> A >> B >> C >> X;
    answer = solver(A,B,C,X);
    cout << answer << endl;

    return 0;
}