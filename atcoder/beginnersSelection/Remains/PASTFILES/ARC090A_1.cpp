#include<iostream>
#include<vector>
using namespace std;

// Problem 
// 1st C++ Try
// Reference1 https://img.atcoder.jp/arc090/editorial.pdf
// Reference2 https://atcoder.jp/contests/arc090/submissions/2026589

int main(void){
    int answer;
    answer = 0;
    int N;
    cin >> N;
    vector<int> A1;
    vector<int> A2;
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
    int nowmax;
    nowmax=0;
    for(int j=0;j<N;j++){
        int nowsum;
        nowsum = 0;
        for(int k=0;k<=j;k++){
            nowsum = nowsum + A1.at(k);
        }
        for(int k=j;k<N;k++){
            nowsum = nowsum + A2.at(k);
        }
        if(nowmax < nowsum){
            nowmax = nowsum;
        }
    }
    answer = nowmax;
    cout << answer << endl;
    return 0;
}