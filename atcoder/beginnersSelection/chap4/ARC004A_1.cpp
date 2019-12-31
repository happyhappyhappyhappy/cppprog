#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

// Problem https://atcoder.jp/contests/arc004/tasks/arc004_1

float solver(int allP,vector<int> X,vector<int> Y){
    float maxDist =0.000;
    float result;
    /** for(int j=0;j<allP;j++){
        cout << "(" << X.at(j) << "," << Y.at(j) << ")" << endl;
    }**/
    for(int j=0;j<allP;j++){
        for(int k=0;k<allP;k++){
            float nowDist;
            int diffX,diffY;
            diffX = pow(( X.at(j) - X.at(k)),2);
            diffY = pow(( Y.at(j)-Y.at(k)),2);
            nowDist = sqrt(diffX+diffY);
            if(maxDist < nowDist)maxDist = nowDist;
        }
    }
    result = maxDist;
    return result;
}

int main(void){
    int N;
    float answer;
    cin >> N;
    vector<int> x(N),y(N);
    for(int j=0;j<N;j++){
        cin >> x.at(j) >> y.at(j);
    }
    answer = solver(N,x,y);
    cout << answer << endl;
}