#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// https://atcoder.jp/contests/abc102/tasks/abc102_b
int solver(int aN,vector<int> n){
    int result;
    sort(n.begin(),n.end(),greater<int>());
 /**
    for (int j = 0; j < aN; j++)
    {
        cout << n.at(j) << ",";
    }
    cout << endl;
**/    
    result = n.at(0)-n.at(aN-1);
    return result;
}
int main(void){
    int N,answer;
    cin >> N;
    vector<int> A(N);
    for(int j=0;j<N;j++){
        cin >> A.at(j);
    }
    answer = solver(N,A);
    cout << answer << endl;
}