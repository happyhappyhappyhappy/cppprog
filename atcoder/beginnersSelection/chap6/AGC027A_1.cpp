#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Debug Output https://qiita.com/ysuzuki19/items/d89057d65284ba1a16ac
#define debug(var)  do{std::cout << #var << " : ";view(var);}while(0)
template<typename T> void view(T e){std::cout << e << std::endl;}
template<typename T> void view(const std::vector<T>& v){for(const auto& e : v){ std::cout << e << " "; } std::cout << std::endl;}
template<typename T> void view(const std::vector<std::vector<T> >& vv){ for(const auto& v : vv){ view(v); } }

// Problem https://atcoder.jp/contests/agc027/tasks/agc027_a
// Reference1 https://img.atcoder.jp/agc027/editorial.pdf
// Reference2(myself pythoncode) https://atcoder.jp/contests/agc027/submissions/3891295
int solver(int childN,int haveCandy,vector<int> childS){
    int result=0;
    bool handedFlag = true;
    sort(childS.begin(),childS.end());
//    debug(childS);
    int childC = 0 ;
    for(int j=0;j<childN;j++){
        haveCandy = haveCandy - childS.at(j);
        if(0 <= haveCandy){
            result = result + 1;
//            debug(result);
        }
        else
        {
            break;
        }
    }
    if( 0 < haveCandy) // 全員に配ってもまだ余る場合→残りの一人に押しつける→満足減少
        {
 //           debug("Amarunode osituke");
            result = result - 1;
        }
    return result;
}
int main(void){
    int N,x;
    int answer=0;
    cin >> N >> x ;
    vector<int> a(N);
    for(int j=0;j<N;j++){
        cin >> a.at(j);
    }
    answer = solver(N,x,a);
    cout << answer << endl;
    return 0;
}
