#include<iostream>
#include<vector>
#include<string>

#define yes "Yes"
#define no "No"
#define black '#'

using namespace std;

bool check_in_campus(int H,int W,int TH,int TW){
    bool result;
    result = true;
    // 一つでもチェックが通るとfalseになって戻せない
    if(TH < 0){
        result = false;
    }
    if(TW < 0){
        result = false;
    }
    if( H <= TH) {
        result = false;
    }
    if( W <= TW){
        result = false;
    }
    return result;
}

bool solver(int height,int width,vector<string> campus){
    bool result;
    result = true;
    // 上→右→下→左
    vector<int> dh = {1,0,-1,0};
    vector<int> dw = {0,1,0,-1};
    for(int j=0;j<height;j++){
        for(int k=0;k<width;k++){
            if(campus.at(j).at(k) == black){
                int blackCount;
                blackCount = 0;
                for(int dir=0;dir < 4;dir++){
                    int nowH,nowW;
                    nowH = j+dh.at(dir);
                    nowW = k+dw.at(dir);
                    bool incampus;
                    incampus = false;
                    incampus = check_in_campus(height,width,nowH,nowW);
                    if(incampus){
                        if(campus.at(nowH).at(nowW) == black){
                            blackCount++;
                        }
                        
                    }
                }
                if(blackCount == 0){
                    result=false;
                }
            }
            // campus != black は処理無し
        }
    }
    return result;
}

int main(void){
    bool answer;
    answer=true;
    int H,W;
    cin >> H >> W;
    vector<string> s;
    s.clear();
    for(int j=0;j<H;j++){
        string si;
        cin >> si;
        s.push_back(si);
    }
    answer = solver(H,W,s);
    if(answer){
        cout << yes << endl;
    }
    else{
        cout << no << endl;
    }
    return 0;
}