#include<iostream>
#include<vector>
using namespace std;

// Debug Output Reference https://qiita.com/ysuzuki19/items/d89057d65284ba1a16ac
#define debug(var)  do{std::cout << #var << " : ";view(var);}while(0)
template<typename T> void view(T e){std::cout << e << std::endl;}
template<typename T> void view(const std::vector<T>& v){for(const auto& e : v){ std::cout << e << " "; } std::cout << std::endl;}
template<typename T> void view(const std::vector<std::vector<T> >& vv){ for(const auto& v : vv){ view(v); } }

// https://atcoder.jp/contests/abc127/tasks/abc127_c
// Reference https://img.atcoder.jp/abc127/editorial.pdf (本問)

int solver(int idCardN,int gateN,vector<int> froms,vector<int> tos){
    int result;
    vector<int> selectedCard(idCardN+1,0);
    for(int j=0;j<gateN;j++){
        for(int k=froms.at(j);k<=tos.at(j);k++){
            selectedCard.at(k) = selectedCard.at(k)+1;
        }
    }
    debug(selectedCard);
    result = 0;
    return result;
}

int main(void){
    int N,M;
    int answer=0;
    cin >> N >> M;
    vector<int> L(M,0);
    vector<int> R(M,0);
    for(int j=0;j<M;j++){
        cin >> L.at(j) >> R.at(j);
    }
//    debug(L);
//    debug(R);
    answer = solver(N,M,L,R);
    cout << answer << endl;
}