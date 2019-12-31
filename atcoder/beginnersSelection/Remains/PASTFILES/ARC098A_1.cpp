#include<iostream>
#include<string>
#include<vector>

using namespace std;
// Problem https://atcoder.jp/contests/abc098/tasks/arc098_a
// Reference https://img.atcoder.jp/arc098/editorial.pdf

int main(void){
    int answer = 0;
    int N;
    cin >> N;
    answer = N;
    string S;
    S.clear();
    cin >> S;
    vector<int> E,W;
    E.clear();
    W.clear();
    for(int j=0;j < N;j++){
        if(S.at(j)=='E'){
            E.push_back(1);
            W.push_back(0);
        }
        else{
            E.push_back(0);
            W.push_back(1);
        }
    }
/**    for(int j=0;j<N;j++){
        cout << E.at(j) << " ";
    }
    cout << endl;
    for(int j=0;j<N;j++){
        cout << W.at(j) << " ";
    }
    cout << endl;**/
    vector<int> accE(N+1,0),accW(N+1,0);
    
//    cout << "accE " << accE.at(0) << " ";
    for(int j=0;j<N;j++){
        accE.at(j+1) = accE.at(j) + E.at(j);
//        cout << accE.at(j+1) << " ";
    }
//    cout << endl;
//    cout << "accW " << accW.at(0) << " ";
    for(int j=0;j<N;j++){
        accW.at(j+1) = accW.at(j) + W.at(j);
//        cout << accW.at(j+1) << " ";
    }
//    cout << endl;
//    cout << "Change Counter:";
    for(int j=0;j<N;j++){
        int change;
        change = accW.at(j)+accE.at(N)-accE.at(j+1);
//        cout << change << " ";
        if(change < answer){
            answer = change;
        }
    }
//    cout << endl;
    cout << answer << endl;
    return 0;
}