#include<iostream>
#include<vector>
using namespace std;

// Problem https://atcoder.jp/contests/abc085/tasks/abc085_c

vector<int> solver(int allMoney,int needSum){
    vector<int> result(3,-1);
    for(int bill10000=0;bill10000<=allMoney;bill10000++){
        for(int bill5000=0;bill5000<=allMoney-bill10000;bill5000++){
            int bill1000=allMoney-bill10000-bill5000;
            int sum=bill10000*10000+bill5000*5000+bill1000*1000;
            if(sum == needSum){
                result.at(0) = bill10000;
                result.at(1) = bill5000;
                result.at(2) = bill1000;
                break;
            }
        }

    }
    return result;
}

int main(void){
    vector<int> answer(3,-1);
    int N,Y;
    cin >> N >> Y ;
    answer = solver(N,Y);
    cout << answer.at(0) << " " << answer.at(1) << " " << answer.at(2) << endl;
    return 0;
}