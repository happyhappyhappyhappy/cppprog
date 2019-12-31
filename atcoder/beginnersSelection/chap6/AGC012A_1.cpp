#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// Problem https://atcoder.jp/contests/agc012/tasks/agc012_a



long long solver(int allCons,vector<long long> skills){
    int groupN = allCons/3;
    long long  result=0;
    // for(int j=0;j<allCons;j++){
    //    cout << skills.at(j) << " ";
    // }
    // cout << endl;
    vector<vector<long long>> skilltable;
    skilltable = vector<vector<long long>>(groupN, vector<long long>(3, 0));
    sort(skills.begin(),skills.end(),greater<long long>());
//    for(int j=0;j<allCons;j++){
//        cout << skills.at(j) << " ";
//    }
//    cout << endl;
   for(int j=0;j<groupN;j++){
       result = result + skills.at(j*2+1);
//       cout << result << ",";
   }
//    cout << endl;
    return result;
}

int main(void){
    int N;
    long long  answer=0;
    cin >> N ;
    int allMenber = N*3;
    vector<long long> a(allMenber);
      for(int j=0;j<allMenber;j++){
        cin >> a.at(j);
    } 
    answer = solver(allMenber,a);
    cout << answer << endl;
}