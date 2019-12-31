#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

// Problem https://atcoder.jp/contests/abc098/tasks/arc098_a
// C++ 3rd Try
long int solver(long int MEMBERS,string POSITIONINF){
    long int result;
    result = MEMBERS;
    // EとWを0,1で各専用ベクトルに納める
    vector<long int> EMembers(MEMBERS,0);
    vector<long int> WMembers(MEMBERS,0);

    for(long int j = 0;j<MEMBERS;j++){
        if(POSITIONINF[j]=='E'){
            EMembers[j] = 1;
        }
        else if(POSITIONINF[j]=='W'){
            WMembers[j] = 1;
        }            
    }
    vector<long int> accEMEM(MEMBERS+1,0);
    vector<long int> accWMEM(MEMBERS+1,0);
    // E,Wの累積和を作成
    for(long int j=0;j<MEMBERS;j++){
        accEMEM[j+1] = accEMEM[j]+EMembers[j];
        accWMEM[j+1] = accWMEM[j]+WMembers[j];
    }
    // 各人間がリーダーの時のE,Wが向く方向を求める
    for(long int j=0;j<MEMBERS;j++){
        long int switchMember = 0;
        switchMember = accWMEM[j]+accEMEM[MEMBERS]-accEMEM[j+1];
        result = min(result,switchMember);
    }
    return result;
}


int main(void){
    long int answer=0;
    long int N;
    cin >> N;
    string S;
    cin >> S;
    answer = solver(N,S);
    cout << answer << endl;
    return 0;
}