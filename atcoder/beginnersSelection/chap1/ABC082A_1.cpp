#include<iostream>
#include<cmath>
using namespace std; 
int main(void){
    int ans;
    float a,b,ave;
    cin >> a >> b;
    ave = ceil(( a + b ) / 2.0);
    ans = static_cast<int>(ave);
    cout << ans;
    return 0;
}