#include<iostream>
using namespace std;
int solver(int everymaketime,int makepeace,int alltime){
    int result;
    result = ( alltime / everymaketime ) * makepeace;
    return result;
}

int main(void){
    int A,B,T;
    int answer;
    cin >> A >> B >> T;
    answer = solver(A,B,T);
    cout << answer << endl;
}