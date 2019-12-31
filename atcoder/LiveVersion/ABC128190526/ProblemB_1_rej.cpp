#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

// Problem https://atcoder.jp/contests/abc128/tasks/abc128_b
// ボツ
vector<int> solver(int cityN,vector<string> cityNames,vector<int> points){
    vector<int> result(cityN);
    /**
     *   T(;_;)Tｵﾃｱｹﾞｪｰ 
     *   1.cityNamesとpointsを結合して→resutrantというvectorを作成→ソート
     *     citynamesは昇順 pointsは降順 どう帳尻を合わせるか
     *   2.与えられたデータの順番を保持 くっつけるのか？ 
     *   ↓
     *   1.pointsはマイナスを付けて保存すればどっちも昇順(今回の答えにpointsそのものは不要)
     *   2.pair<X,int>のintの方に今の行数を入れる→後で出すときに+1すれば良い
     *   3.2のXは pair<string,int>利用
     **/



    for(int j=0;j<cityN;j++){
        result.at(j)=j;
    }

    return result;
}

int main(void){
    int N;
    cin >> N;
    vector<int> answer(N);
    vector<int> PN(N);
    vector<string> SN(N);
    for(int j=0;j<N;j++){
        cin >> SN.at(j) >> PN.at(j);
    }
    answer = solver(N,SN,PN);
    for(int j=0;j<N;j++){
        cout << answer.at(j) << endl;
    }
    return 0;
}