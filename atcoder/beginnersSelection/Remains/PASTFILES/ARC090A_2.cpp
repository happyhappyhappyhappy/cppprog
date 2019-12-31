#include<iostream>
#include<vector>

using namespace std;

// Problem https://atcoder.jp/contests/abc087/tasks/arc090_a

int solver(int ROWCOUNT,vector<int> UPLINE,vector<int> DOWNLINE){
    int result;
    result = 0;
    int maxcandy;
    maxcandy = 0;
    for(int j=0;j<ROWCOUNT;j++){
        int nowcandy;
        nowcandy = 0;
        for(int k=0;k<=j;k++){
            nowcandy = nowcandy + UPLINE.at(k);
        }
        for(int k=j;k<ROWCOUNT;k++){
            nowcandy = nowcandy + DOWNLINE.at(k);
        }
        if(maxcandy < nowcandy){
            maxcandy = nowcandy;
        }
    }
    result = maxcandy;
    return result;
}


int main(void){
    int answer;
    answer = 0;
    int N;
    cin >> N ;
    vector<int> A1,A2;
    A1.clear();
    A2.clear();
    for(int j=0;j<N;j++){
        int candy;
        cin >> candy;
        A1.push_back(candy);
    }
    for(int j=0;j<N;j++){
        int candy;
        cin >> candy;
        A2.push_back(candy);
    }
    answer = solver(N,A1,A2);
    cout << answer << endl;
    return 0;
}