#include<iostream>
#include<vector>
#include<cstdlib> // absを使う

using namespace std;

#define yes "Yes"
#define no "No"

// (((ARC089A)))
// Problem https://atcoder.jp/contests/abc086/tasks/arc089_a

bool solver(int pointNumber,vector<int> arTime,vector<int> pointX,vector<int> pointY){
    bool result;
    result=true;
    // for(int j=0;j<=pointNumber;j++){
    //     cout << "Time=" << arTime.at(j) << ",x=" << pointX.at(j) << ",y=" << pointY.at(j) << endl;
    // }
    // 戦略 この移動が出来るためには
    // (条件1)移動時間が2点の移動する長さより多いこと
    // (条件2)移動時間が偶数であれば移動する長さも偶数であること
    //        奇数であれば移動する長さも奇数であること
    for(int j=1;j<=pointNumber;j++){
        int moveTime,moveDist;
        moveTime=arTime.at(j)-arTime.at(j-1);
        moveDist=abs(pointX.at(j)-pointX.at(j-1))+abs(pointY.at(j)-pointY.at(j-1));
        // (条件1を満たしていない)
        if(moveTime<moveDist){
            result=false;
            break;
        }
        // (条件2を満たしていない)
        if((moveTime%2)!=(moveDist%2)){
            result=false;
            break;
        }       
    }
    // 全部の条件を満たせた時だけ 最初のresult=true;をそのまま適応している
    return result;
}

int main(void){
    bool answer;
    answer=true;
    int N;
    cin >> N;
    vector<int> ti(N+1,0);
    vector<int> x(N+1,0);
    vector<int> y(N+1,0);
    for(int j=1;j<=N;j++){
        cin >> ti.at(j) >> x.at(j) >> y.at(j);
    }
    answer = solver(N,ti,x,y);
    if(answer){
        cout << yes << endl;
    }
    else{
        cout << no << endl;
    }
}