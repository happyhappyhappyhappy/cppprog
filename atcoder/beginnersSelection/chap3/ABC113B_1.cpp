#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
// Problem https://atcoder.jp/contests/abc113/tasks/abc113_b

int solver(int aN,int gT,int mT,vector<int> h){
    float minDT=10000.0; // 最小温度差
    int result=-1; // 結果の場所。最終的に1を足す
    for(int j=0;j<aN;j++){
        float diffTemperture;
        diffTemperture = abs(gT-(mT-h[j]*0.006));
        if(diffTemperture<minDT){
            minDT=diffTemperture;
            result = j;
        }
    }
    return result+1;
}
int main(void){
    int N,T,A,answer;
    cin >> N >> T >> A;
    vector<int> H(N);
    for(int j=0;j<N;j++){
        cin >> H.at(j);
    }
    answer = solver(N,A,T,H);
    cout << answer << endl;
}