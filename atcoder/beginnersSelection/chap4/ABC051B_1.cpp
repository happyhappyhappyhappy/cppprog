#include<iostream>
using namespace std;

// Problem https://atcoder.jp/contests/abc051/tasks/abc051_b
// Reference editrial

int solver(int eachMax,int sumNum){
    int result;
    int sumPat=0;
    for(int x=0;x <= eachMax;x++){
        for(int y=0;y<= eachMax;y++){
                int diffSumNum=sumNum-x-y;// zの替わりに調査
                if(0 <= diffSumNum and diffSumNum <= eachMax){
                    sumPat = sumPat + 1;
                }

        }
    }

    result = sumPat;
    return result;
}

int main(void){
    int K,S,answer;
    cin >> K >> S ;
    answer = solver(K,S);
    cout << answer << endl;
}