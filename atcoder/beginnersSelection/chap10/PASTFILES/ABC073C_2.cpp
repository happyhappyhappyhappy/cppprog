#include<iostream>
#include<vector>
#include<iterator>
#include<unordered_map>
using lli = long long int;
using loi = long int ;
using namespace std;

// Problem https://atcoder.jp/contests/abc073/tasks/abc073_c

loi solver(loi aicount,vector<lli> joiNumber){
    loi result ;
    result = 0;

    unordered_map<lli,loi> dict;
    for(loi j=0;j<aicount;j++){
        dict[joiNumber.at(j)]=dict[joiNumber.at(j)]+1;
    }
    for(auto itr=dict.begin();itr!=dict.end();itr++){
        loi saidNum;
        saidNum = (itr->second)%2;
        result = saidNum + result;
    }
    return result;
}

int main(void){
    loi answer;
    loi N;
    cin >> N ;
    vector<lli>  Ai(N,0);
    for(loi j=0;j<N;j++){
        cin >> Ai.at(j);
    }
    answer = solver(distance(Ai.begin(),Ai.end()),Ai);
    cout << answer << endl;
}