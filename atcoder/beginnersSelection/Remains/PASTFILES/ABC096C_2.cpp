#include<iostream>
#include<vector>
#include<string>

#define black '#'
#define yes "Yes"
#define no "No"

using namespace std;

bool solver(int height,int width,vector<string> campus){
    bool result;
    result = true;
    // 上→右→下→左
    vector<int> hd={1,0,-1,0};
    vector<int> wd={0,1,0,-1};
    for(int j=0;j<height;j++){
        for(int k=0;k<width;k++){
            char nowPosValue;
            nowPosValue = campus.at(j).at(k);
            if(nowPosValue == black){
                int nextblack;
                nextblack = 0;
                for(int m=0;m<4;m++){
                    int checkPosH,checkPosW;
                    checkPosH = j+hd.at(m);
                    checkPosW = k+wd.at(m);
                    if(checkPosH<0 || checkPosW<0 || height<=checkPosH || width<=checkPosW){
                        continue;
                    }
                    char checkPosValue;
                    checkPosValue = campus.at(checkPosH).at(checkPosW);
                    if(checkPosValue == black){
                        nextblack = nextblack + 1;
                    }
                }
                if(nextblack == 0){
                    result = false;
                }
            }
        }
    }
    return result;
}

int main(void){
    bool answer;
    int H,W;
    cin >> H >> W;
    vector<string> S;
    S.clear();
    for(int j=0;j<H;j++){
        string s1;
        cin >> s1;
        S.push_back(s1);
    }
    answer = solver(H,W,S);
    if(answer){
        cout << yes << endl;
    }
    else{
        cout << no << endl;
    }
}