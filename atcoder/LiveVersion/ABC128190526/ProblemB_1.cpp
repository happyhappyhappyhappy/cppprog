#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<string>
using namespace std;

// Problem  https://atcoder.jp/contests/abc128/tasks/abc128_b
// Reference https://img.atcoder.jp/abc128/editorial.pdf

vector<int> solver(int restN, vector<pair<pair<string,int>,int>> restData){
    vector<int> result(restN);

    sort(restData.begin(),restData.end());
    /** for(int j=0;j<restN;j++){
        cout << restData.at(j).first.first << " " << 
                restData.at(j).first.second << " " << 
                restData.at(j).second << endl; 
    }**/
    for(int j=0;j<restN;j++){
        result.at(j) = restData.at(j).second;
    }
    return result;
}

int main(void){
    int N;
    cin >> N;
    vector<int> answer(N);
    vector<pair<pair<string,int>,int>>  data(N);
    for(int j=0;j<N;j++){
        string Sj;
        int Pj;
        cin >> Sj >> Pj;
        data.at(j) = make_pair(make_pair(Sj,-Pj),j+1);
    }
   /** for(int j=0;j<N;j++){
        cout << data.at(j).first.first << " " << 
                data.at(j).first.second << " " << 
                data.at(j).second << endl; 
    }**/
    answer = solver(N,data);
    for(int j=0;j<N;j++){
        cout << answer.at(j) << endl;
    }
    return 0;
}