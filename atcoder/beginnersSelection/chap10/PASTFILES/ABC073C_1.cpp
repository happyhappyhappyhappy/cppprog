#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
using lli=long long int;
using loi=long int;
// Problem https://atcoder.jp/contests/abc073/tasks/abc073_c
loi solver(loi numCount,vector<lli> JoisinoSayNo){
    loi result;
    result=0;
    unordered_map<lli,loi> numDict;
    numDict.clear();
    for(loi j=0;j<numCount;j++){
        numDict[JoisinoSayNo.at(j)]=(numDict[JoisinoSayNo.at(j)]+1)%2;
    }
   for(auto itr=numDict.begin();itr != numDict.end();itr++){
   //     cout << "key = " << itr->first << " Value=" << itr->second << endl;
    result=result+itr->second;
    }

    return result;
}

int main(void){
    loi answer;
    loi N;
    cin >> N ;
    vector<lli> Ai(N,0);
    for(loi j=0;j<N;j++){
        cin >> Ai.at(j);
    }
    answer = 0; // 初期化
    answer = solver(N,Ai);
    cout << answer << endl;
}