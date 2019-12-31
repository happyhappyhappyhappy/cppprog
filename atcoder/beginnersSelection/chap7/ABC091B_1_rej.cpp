#include<iostream>
#include<map>
#include<string>
using namespace std;

// Problem https://atcoder.jp/contests/abc091/tasks/abc091_b

int solver(int blueC,map blue,int redC,map red){
    return 0;
}

int main(void){
    int N,M;
    map<string> si;
    map<string> ti;
    //  中断vector型へ変更→参考解答を元にmap型へ作り直し。これは山中の初期化。
    cin >> N ;
    for(int j=0;j<N;j++){
        string sist;
        cin >> sist;
        si.insert(sist);
    }
    cin >> M ;
    for(int j=0;j<M;j++){
        string tist;
        cin >> tist;
        ti.insert(tist);
    }
    cout << si.size() << endl;
    cout << ti.size() << endl;
}