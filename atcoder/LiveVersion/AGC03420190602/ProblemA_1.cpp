#include<iostream>
#include<string>
#include<vector>
using namespace std;
// Problem https://atcoder.jp/contests/agc034/tasks/agc034_a
// Reference 

// Debug Output Reference https://qiita.com/ysuzuki19/items/d89057d65284ba1a16ac
#define debug(var)  do{std::cout << #var << " : ";view(var);}while(0)
template<typename T> void view(T e){std::cout << e << std::endl;}
template<typename T> void view(const std::vector<T>& v){for(const auto& e : v){ std::cout << e << " "; } std::cout << std::endl;}
template<typename T> void view(const std::vector<std::vector<T> >& vv){ for(const auto& v : vv){ view(v); } }

bool solver(int lineLng,int sStart,int fStart,int sGoal,int fGoal,string line){
    bool result = true;
    // 1.snuke route don't have twoblocks.
    string sroute=line(sStart-1,fstart-sStart);

    return result;
}

int main(void){
    int N,A,B,C,D;
    bool answer=true;
    string S;
    cin >> N >> A >> B >> C >> D;
    cin >> S;
    answer = solver(N,A,B,C,D,S);
    if(answer){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}