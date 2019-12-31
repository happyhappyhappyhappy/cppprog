#include<iostream>
#include<vector>
#include<iterator>
#include<unordered_map>
using namespace std;
using loi=long int;

// Problem https://atcoder.jp/contests/abc073/tasks/abc073_c
loi solver(loi numCount,vector<loi> joiSaidNum){
    loi result;
    result = 0;
    unordered_map<loi,loi> dict;
    for(loi j=0;j<numCount;j++){
        dict[joiSaidNum.at(j)]=dict[joiSaidNum.at(j)]+1;
    }
    for(auto itr=dict.begin();itr!=dict.end();itr++){
            result = result + (itr->second)%2;
    }
    return result;
}


int main(void){
    loi answer;
    answer = 0;
    loi N;
    cin >> N;
    vector<loi> Ai(N,0);
    for(loi j=0;j<N;j++){
        cin >> Ai.at(j);
    }
    answer = solver(distance(Ai.begin(),Ai.end()),Ai);
    cout << answer << endl;
}