#include<iostream>
#include<vector>
using namespace std;

// Problem https://atcoder.jp/contests/abc065/tasks/abc065_b
// 1st C++ Try
// Reference https://atcoder.jp/img/arc076/editorial.pdf

int main(void){
    int answer;
    answer = -1;
    int N;
    cin >> N;
    vector<int> Ai;
    for(int j=0;j<N;j++){
        int shineNo;
        cin >> shineNo;
        shineNo = shineNo - 1;
        Ai.push_back(shineNo);
    }
    int nowShine ;
    nowShine = 1-1;
    int counter ;
    counter = 0;
    while(true){
        if(nowShine == (2-1)){
            answer = counter;
            break;
        }
        if(N <= counter){
            break;
        }
        nowShine = Ai.at(nowShine);
        counter = counter + 1;
    }
    cout << answer << endl;
    return 0;
}