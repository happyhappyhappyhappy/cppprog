#include<iostream>
using namespace std;
// https://atcoder.jp/contests/abc068/tasks/abc068_b
// 無難に1からNまで全部のチェックをする
// (楽をする場合は1->1,2-3->2,4-7->4..と決め打ち、二進表現など)

int solver(int gavenNumber){
    int result;
    result = 1;
    int defaultTwoDivCounter = 0;
    for(int j=1;j<gavenNumber+1;j++){
        int twodivCounter=0;
        int objectNumber;
        objectNumber = j;
        while(true){
            if(objectNumber%2 == 0){
                twodivCounter = twodivCounter + 1;
                objectNumber = objectNumber / 2;
            }
            else{
                break;
            }
        }
        if(defaultTwoDivCounter < twodivCounter){
            defaultTwoDivCounter = twodivCounter;
            result = j;
        }
    }
    return result;
}

int main(void){
    int N,answer;
    cin >> N ;
    answer = solver(N);
    cout << answer << endl;
}