#include<iostream>
#include<string>
#include<vector>
// 大文字小文字エラー回避→プログラム中は小文字で統一
#define yes "Yes" 
#define no "No" 
#define black '#'
using namespace std;

// Problem https://atcoder.jp/contests/abc096/tasks/abc096_c
// Refference1 https://atcoder.jp/contests/abc096/submissions/2447972
//           (https://img.atcoder.jp/abc096/editorial.pdf)
// Refference2 https://atcoder.jp/contests/abc096/submissions/2470276

int main(void){
    bool answer;   
    answer = true;
    int H,W;
    cin >> H >> W;
    vector<string> canpus;
    canpus.clear();
    for(int j=0;j<H;j++){
        string oneLine;
        cin >> oneLine;
        canpus.push_back(oneLine);
    }
    // チェック方向
    vector<int> dh = {1,0,-1,0};
    vector<int> dw = {0,1,0,-1};
    for(int j=0;j<H;j++){
        for(int k=0;k<W;k++){
            if(canpus.at(j).at(k)==black){
                int blackCounter;
                blackCounter = 0;
                for(int dir=0;dir<4;dir++){
                    int nowH,nowW;
                    nowH = j+dh.at(dir);
                    nowW = k+dw.at(dir);
                    if(nowH < 0 || (H-1) < nowH || 
                    nowW < 0 || (W-1) < nowW){
                        continue;
                    } // if(nowH < 0 || ...)
                    if(canpus.at(nowH).at(nowW)==black){
                        blackCounter = blackCounter + 1;
                    } // if(canpus.at(nowH).at(nowW)...)
                } // for(int dir=0;dir<4 ...)
                if(blackCounter==0)
                {
                    answer = false;    
                } // if(blackCounter == 0...)
            }// if(canpus.at(j).at(k)==black...)
            else{
                continue;
            }//   if(canpus.at(j).at(k)==black...) のelse        
        }
    }
    if(answer){
        cout << yes << endl;
    }
    else{
        cout << no << endl;
    }
    return 0;
}