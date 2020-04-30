#include<iostream>
using namespace std;

long long extGCD(long long a,long long b, long long &x, long long &y){
    if(b == 0){
        x = 1;
        y = 0;
        return a;
    }
    long long d = extGCD(b, a%b, y, x);
    y = y - (a/b) * x;
    cout << "D is " << d << endl;
    return d;
}


inline long long mod(long long a,long long m){
    return (a % m + m)%m;
}

long long modinv(long long a, long long m){
    long long x,y;
    extGCD(a,m,x,y);
    return mod(x,m);
}


int main(){
    cout << modinv(48,16) << endl;
//    cout << extGCD(128,64) << endl


}