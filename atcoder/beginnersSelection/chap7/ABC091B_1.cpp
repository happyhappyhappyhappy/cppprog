#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<utility>
using namespace std;

// Problem https://atcoder.jp/contests/abc091/tasks/abc091_b
// Reference(mapの利用) https://atcoder.jp/contests/abc091/submissions/2246375

int solver(int blueCardC,vector<string> blueCards,int redCardC,vector<string> redCards){
    int result=0;
    map<string,int> dict;// ここから参考文献を使いながら開始
    dict.clear();
    for(int j=0;j<blueCards.size();j++){
       // cout << blueCards.at(j) << " ";
        dict[blueCards.at(j)]= dict[blueCards.at(j)]+1;
    }
    for(int j=0;j<redCards.size();j++){
         dict[redCards.at(j)] = dict[redCards.at(j)] - 1;
    }
    for(auto jt=dict.begin();jt!=dict.end();++jt){
        // cout << jt->first << "=>" << jt->second << endl;
        // これだとエラー
        // cout << std::get<0>(jt) << "=>" << std::get<1>(jt) << endl;
        if(result < jt->second){
            result = jt->second;
        }
    }   
    return result;
}   
int main(void){
    int N,M;
    int answer = 0;
    cin >> N ;// 青いカード
    vector<string> S(N);
    for(int j=0;j<N;j++){
        string str;
        cin >> str;
        S.at(j) = str;
    }
    cin >> M ;// 赤いカード
    vector<string> T(M);
    for(int j=0;j<M;j++){
        string str;
        cin >> str;
        T.at(j) = str;
    }
    answer = solver(N,S,M,T);
    cout << answer << endl;
    return 0;
}
