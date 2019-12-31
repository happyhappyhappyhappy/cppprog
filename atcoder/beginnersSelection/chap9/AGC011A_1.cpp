#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Problem https://atcoder.jp/contests/agc011/tasks/agc011_a

int main(void){
    int personNum,capa,maxwait,answer;
    answer = 0;
    cin >> personNum >> capa >> maxwait;
    vector<int> artime(personNum);
    for(int j=0;j<personNum;j++){
        cin >> artime.at(j); 
    }
    sort(artime.begin(),artime.end());
/**     for(int j=0;j<personNum;j++){
        cout << artime.at(j) << " ";
    }
    cout << endl;
    **/
    int stopbusTime;
    stopbusTime = artime.at(0);
    int getOnNum = 1;
    for(int j=1;j<personNum;j++){
        if(maxwait < (artime.at(j) - stopbusTime) or (capa <= getOnNum)){
            // jさんが着いたとき、もうすでに前のバスが出て行ったときの条件
            // cout << "Mr." << j << " may get on "<< stopbusTime <<" , but bus leave." << endl;
            // バスはその前に発車して→一人目になる状況
            // (1) 時間面:最初の人の出発待ちが耐えられなくなっていそう
            // (2) 容量面:乗った段階で最大量を超えていた
            answer = answer + 1; // 出発した
            getOnNum = 1; // 一人目
            stopbusTime = artime.at(j); // 到着時間更新
        }
        else{
            // それ以外→単に一人追加
            getOnNum = getOnNum + 1;
        }
    }
    if(0 < getOnNum){
        // 全員乗った段階で1人以上
        answer = answer + 1;
    }
    cout << answer << endl;
    return 0;
}