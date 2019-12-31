#include<iostream>
#define Al "Alice"
#define Bo "Borys" 
using namespace std;

// Problem https://atcoder.jp/contests/agc020/tasks/agc020_a

bool solver(int alPos,int boPos){
    bool result ;
    result = false;
    int dist;
    dist = alPos - boPos;
    if((dist%2)==0){
        result = true;
    }
    return result;
}

int main(void){
    bool answer;
    answer = true;
    int N,A,B;
    cin >> N >> A >> B;
    answer = solver(A,B);
    if(answer){
        cout << Al << endl;
    }
    else{
        cout << Bo << endl;
    }
    return 0;
}