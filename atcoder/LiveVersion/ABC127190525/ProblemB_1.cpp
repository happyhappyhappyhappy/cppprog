#include<iostream>
#include<vector>
using namespace std;

// https://atcoder.jp/contests/abc127/tasks/abc127_b

vector<int> solver(int scale,int minus,int milenium){
    vector<int> result(11,0);
    result.at(0) = milenium;
    for(int j=1;j<=10;j++){
        result.at(j) = (result.at(j-1))*scale-minus;
    }
    return result;
}

int main(void){
    int r,D,x2000;
    vector<int> answer(11,0);
    cin >> r >> D >> x2000;
    answer = solver(r,D,x2000);
    for(int j=1;j<=10;j++){
        cout << answer.at(j) << endl;
    }
}