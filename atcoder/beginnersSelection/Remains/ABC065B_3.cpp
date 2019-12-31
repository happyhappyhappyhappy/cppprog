#include<iostream>
#include<vector>

using namespace std;
// Problem https://atcoder.jp/contests/abc065/tasks/abc065_b

int solver(int LAMPNUM,vector<int> NEXTSHINE){
    int result;
    result = -1;
    int switchCounter,nowShining;
    switchCounter = 0;
    nowShining = 0;
    static int targetShining = (2-1);
    while(true){
        if(targetShining == nowShining){
            result = switchCounter;
            break;
        }
        if(switchCounter <= LAMPNUM){
            switchCounter = switchCounter + 1;
            nowShining = NEXTSHINE.at(nowShining);
        }
        else{
            break;
        }
    }
    return result;
}


int main(void){
    int answer;
    answer = -1;
    int N;
    cin >> N;
    vector<int> Ai;
    Ai.clear();
    for(int j=0;j<N;j++){
        int lamp;
        cin >> lamp;
        Ai.push_back(lamp-1);
    }
    answer = solver(N,Ai);
    cout << answer << endl;
    return 0;
}