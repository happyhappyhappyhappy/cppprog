#include<iostream>
#include<string>
#include<vector>
#define bombNumber 9
#define bombChar '#' 
using namespace std;


// Problem https://atcoder.jp/contests/abc075/tasks/abc075_b

vector<vector<int>> solver(int height,int width,vector<string> givenGrid){
    vector<vector<int>> result(height,vector<int> (width,0));
    // 方向操作用vector作成(2つ) 上→右上→右→右下→下→左下→左→左上
    vector<int> dh = {1,1,0,-1,-1,-1,0,1};
    vector<int> dw = {0,1,1,1,0,-1,-1,-1};
    for(int j=0;j<height;j++){
        for(int k=0;k<width;k++){
            char thisPos;
            int thisPosABomb;
            thisPosABomb = 0;
            thisPos = givenGrid.at(j).at(k);
            if(thisPos == bombChar){
                result.at(j).at(k) = bombNumber;
            }
            else{
                for(int m=0;m<8;m++){
                    int nowH = j+dh.at(m);
                    int nowW = k+dw.at(m);
                    if(nowH < 0 || nowW < 0 || 
                    (height-1) < nowH || (width-1) < nowW){
                        continue;
                    }
                    else{
                          if(givenGrid.at(nowH).at(nowW)==bombChar){
                              thisPosABomb=thisPosABomb+1;
                          }  
                    }
                }
                result.at(j).at(k)=thisPosABomb;
            }
        }
    }
    return result;
}

int main(void){
    int H,W;
    cin >> H >> W;
    vector<vector<int>> answer(H,vector<int> (W,0)); 
    vector<string> S;
    S.clear();
    for(int j=0;j<H;j++){
        string s1;
        cin >> s1;
        S.push_back(s1);
    }
    answer=solver(H,W,S);
    for(int j=0;j<H;j++){
        for(int k=0;k<W;k++){
            int answerInt;
            answerInt = answer.at(j).at(k);
            if(answerInt == bombNumber){
                cout << bombChar ;
            }
            else{
                cout << answerInt;
            }
        }
        cout << endl;
    }
    return 0;
}