#include<iostream>
#include<vector>
using namespace std;

// Problem https://atcoder.jp/contests/abc095/tasks/abc095_b

int solver(int kind,int gP,vector<int> cP){// 種類,与えられた粉,各材料の使用量
    int result;
    /** for(int j=0;j<kind;j++){
        cout << cP.at(j) << ",";
    }
    cout << endl; **/
    int allP=0;
    int minP=1010;
    for(int j=0;j<kind;j++){
        allP = allP + cP.at(j);
        // ついでに最小粉もチェック
        if(cP.at(j) < minP) minP = cP.at(j);
    }
    /** cout << "allUsedPowder is " << allP << endl;
    cout << "minPowser is " << minP << endl; **/
    int rCake; // 全種類に使ったうえで、最小粉を使って作れるケーキの数
    rCake = ( gP - allP ) / minP;
    result = kind + rCake;
    return result;
}

int main(void){
    int N,X,answer;
    cin >> N >> X;
    vector<int> m(N);
    for(int j=0;j <N;j++){
        cin >> m.at(j) ;
    }
    answer = solver(N,X,m);
    cout << answer << endl; 
    return 0;
}