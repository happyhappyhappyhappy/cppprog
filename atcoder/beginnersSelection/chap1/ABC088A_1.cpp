#include<iostream>
using namespace std;

int main (){
    int N,A;
    cin >> N;
    cin >> A;
    int oturi ;
    oturi = N % 500;
    if(oturi <= A)
        {
            cout << "Yes" << endl; 
        }
    else
        {
            cout << "No" << endl;
        }
}