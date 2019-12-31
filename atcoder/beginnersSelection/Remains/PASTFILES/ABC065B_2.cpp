#include<iostream>
#include<vector>

using namespace std;

// Problem https://atcoder.jp/contests/abc065/tasks/abc065_b
// Try C++ 2nd

int solver(int lampCounter,vector<int> nextShineLamp){
    int result;
    result = -1;
    int counter,nowShining;
    counter = 0;
    nowShining = 0; 
    const int objectShining = ( 2 - 1);
    while(true){

        if(nowShining == objectShining){
            result = counter;
            break;
        }
        else{
            if(counter < lampCounter ){
                counter = counter + 1;
                nowShining = nextShineLamp.at(nowShining);
            }
            else
            {
                break;
            }
        }
    }
    return result;
}

int main(void){
    int answer;
    answer = 0;
    int N;
    cin >> N;
    vector<int> Ai(N,0);
    for(int j=0;j<N;j++){
        int shineLamp;
        shineLamp=0;
        cin >> shineLamp;
        Ai.at(j)=shineLamp-1;
    }
    answer = solver(N,Ai);
    cout << answer << endl;
    return 0;
}
