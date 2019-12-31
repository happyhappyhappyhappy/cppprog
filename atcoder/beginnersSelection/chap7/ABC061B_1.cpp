#include<iostream>
#include<vector>
using namespace std;

// Problem https://atcoder.jp/contests/abc061/tasks/abc061_b
// もしかしたら単純に2行目以降は文字をかき集めるだけで良かったかも
vector<int> solver(int point,int bridge,vector<vector<int> > linkB){
    vector<int> result(point,0);
    for(int j=0;j<bridge;j++){
        for(int k=0;k<2;k++){
            int positionID;
            positionID = linkB.at(j).at(k)-1;
            result.at(positionID)=result.at(positionID)+1;
        }
    }
    return result;
}

int main(void){
    int N,M;
    cin >> N >> M ;
    vector< vector<int> > ab (M, vector<int>(2) );
    vector<int> answer(N);
    for(int j=0;j<M;j++){
        cin >> ab.at(j).at(0) >> ab.at(j).at(1);
    }
    answer = solver(N,M,ab);
    for(int j=0;j<N;j++){
        cout << answer.at(j) << endl;
    }
    return 0;
}