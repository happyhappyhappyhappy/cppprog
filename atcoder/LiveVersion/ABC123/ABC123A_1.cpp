#include<iostream>
using namespace std;
int main(void){
    int A,B,C,D,E,K;
    cin >> A >> B >> C >> D >> E >> K;
    if(E-A <= K){
        cout << "Yay!" << endl;
    }
    else
    {
        cout << ":(" << endl;
    }
    return 0;
}