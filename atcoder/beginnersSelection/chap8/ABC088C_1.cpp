#include<iostream>
#include<vector>
#include<string>
using namespace std;
// Problem https://atcoder.jp/contests/abc088/tasks/abc088_c
// Referrence https://img.atcoder.jp/abc088/editorial.pdf

string solver(vector<vector<int>> infoGrid){
    string result="No";
    int a0,a1,a2,b0,b1,b2;// a0を固定して得られると予測される値
    int c11eq,c12eq,c21eq,c22eq;// 上記値とinfogridの差分
    a0=0;
    b0=infoGrid.at(0).at(0)-a0;
    b1=infoGrid.at(0).at(1)-a0;
    b2=infoGrid.at(0).at(2)-a0;
    a1=infoGrid.at(1).at(0)-b0;
    a2=infoGrid.at(2).at(0)-b0;
    c11eq=infoGrid.at(1).at(1)-(a1+b1);
    c12eq=infoGrid.at(1).at(2)-(a1+b2);
    c21eq=infoGrid.at(2).at(1)-(a2+b1);
    c22eq=infoGrid.at(2).at(2)-(a2+b2);
    if(c11eq == 0 and c12eq == 0 and c21eq == 0 and c22eq == 0){
        result="Yes";
    }

    return result;
}

int main(void){
    string answer;
    vector<vector<int>> cij(3,vector<int>(3,0));

    for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
            cin >> cij.at(j).at(k);
        }
    }
    answer = solver(cij);
    cout << answer << endl;
    return 0;
}