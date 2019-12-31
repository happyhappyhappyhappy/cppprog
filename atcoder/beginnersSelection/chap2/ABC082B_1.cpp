#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
// https://atcoder.jp/contests/abc082/tasks/abc082_b

bool solver(string first,string second){
    sort(first.begin(),first.end()) ;
    sort(second.begin(),second.end(),greater<int>());
    if(first < second){
        return true;
    }
    else{
        return false;
    }
}

int main(void){
    string s,t,ansstr;
    bool result ;
    cin >> s;
    cin >> t;
    result = solver(s,t);
    if(result){
        ansstr = "Yes";
    }
    else{
        ansstr = "No";
    }
    cout << ansstr << endl;
    return 0;
}