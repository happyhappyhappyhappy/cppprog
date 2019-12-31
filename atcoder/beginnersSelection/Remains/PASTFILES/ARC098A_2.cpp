#include<iostream>
#include<vector>
#include<string>
#define loi long int 
using namespace std;

// Problem https://atcoder.jp/contests/abc098/tasks/arc098_a
// C++ 2nd Try
loi solver(loi MEMBER,string DIRECTWAY){
    loi result=3*100000;
    vector<int> eastWay(MEMBER);
    vector<int> westWay(MEMBER);
    for(loi j=0;j<MEMBER;j++){
        if(DIRECTWAY.at(j) == 'E'){
            eastWay.at(j) = 1;
            westWay.at(j) = 0;
        }
        if(DIRECTWAY.at(j) == 'W'){
            eastWay.at(j) = 0;
            westWay.at(j) = 1;
        }
    }
    // TEST1
    /**
    cout << "EAST: ";
    for(loi j=0;j<MEMBER;j++){
        cout << eastWay.at(j) << " ";
    }
    cout << endl;
      cout << "WEST: ";
    for(loi j=0;j<MEMBER;j++){
        cout << westWay.at(j) << " ";
    }
    cout << endl;**/
    // TEST1 END 
    vector<loi> accEastWay;
    vector<loi> accWestWay;
    accEastWay.clear();
    accWestWay.clear();
    // 最初は0
    accEastWay.push_back(0);
    accWestWay.push_back(0);
    for(loi j=0;j<MEMBER;j++){
        accEastWay.push_back(accEastWay.at(j)+eastWay.at(j));
        accWestWay.push_back(accWestWay.at(j)+westWay.at(j));
    }
    // TEST2
/**    cout << "ACCEAST: ";
    for(loi j=0;j<=MEMBER;j++){
        cout << accEastWay.at(j) << " ";
    }
    cout << endl;
      cout << "ACCWEST: ";
    for(loi j=0;j<=MEMBER;j++){
        cout << accWestWay.at(j) << " ";
    }
    cout << endl;**/
    // TEST2 END
    vector<loi> answer;
    answer.clear();
    for(loi j=0;j<MEMBER;j++){
        answer.push_back(accWestWay.at(j)+accEastWay.at(MEMBER)-accEastWay.at(j+1)
        );
    }
    for(loi j=0;j<MEMBER;j++){
        if(answer.at(j) < result){
            result = answer.at(j);
        }
  //      cout << answer.at(j) << " ";
    }
    return result;
}

int main(void){
    loi answer=0;
    loi N=0;
    cin >> N;
    string S;
    S.clear();
    cin >> S;
    answer = solver(N,S);
    cout << answer << endl;
    return 0;
}