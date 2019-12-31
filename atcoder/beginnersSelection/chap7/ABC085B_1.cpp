#include<iostream>
#include<vector>
#include<set>
using namespace std;
// Problem https://atcoder.jp/contests/abc085/tasks/abc085_b

int solver(int allRice,vector<int> dia){
    int result=0;
//    for(int j=0;j<allRice;j++){
//        cout << dia.at(j) << " ";
//    }
//    cout << endl;
    set<int> dias;
    for(int j=0;j<allRice;j++){
        dias.insert(dia.at(j));
    }
    result = dias.size();
    return result;
}

int main(void){
    int answer;
    int N;
    cin >> N;
    vector<int> d(N);
    for(int j=0;j<N;j++){
        cin >> d.at(j);
    }
    answer = solver(N,d);
    cout << answer << endl;
}
