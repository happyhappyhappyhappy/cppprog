#include<iostream>
#include<vector>
#include<string>
using namespace std;


// Problem https://atcoder.jp/contests/abc075/tasks/abc075_b
// Reference https://atcoder.jp/contests/abc075/submissions/1682902

bool out_this_map(int height,int width,int nowheight,int nowwidth){
    bool result;
    result = false;
    if(nowheight<0){
        return true;
    }
    if(nowwidth<0){
        return true;
    }
    if((height-1)<nowheight){
        return true;
    }
    if((width-1)<nowwidth){
        return true;
    }
    return result;
}

vector<vector<int>> solver(int height,int width,vector<string> problemMap){
    vector<vector<int>> result(height,vector<int> (width,0));
    vector<int> dx ={0,1,1,1,0,-1,-1,-1};
    vector<int> dy={1,1,0,-1,-1,-1,0,1};
    for(int j=0;j<height;j++){
        for(int k=0;k<width;k++){
            if(problemMap.at(j).at(k) == '#'){
                result.at(j).at(k)=9;
                continue;
            }
            for(int dir=0;dir < 8;dir++){
                int checkheight;
                checkheight=j+dy.at(dir);
                int checkwidth;
                checkwidth=k+dx.at(dir);
                if(out_this_map(height,width,checkheight,checkwidth)){
                    continue;
                }
                if(problemMap.at(checkheight).at(checkwidth) == '#')
                    {
                    result.at(j).at(k)=result.at(j).at(k)+1;
                    }
            }
        }
    }

    return result;
}


int main(void){
    int H,W;
    cin >> H >> W;
    vector<string> problemMap;
    for(int j=0;j<H;j++){
        string oneLine;
        cin >> oneLine;
        problemMap.push_back(oneLine);
    }
    vector<vector<int>> answer(H,vector<int> (W,0));
    answer = solver(H,W,problemMap);
    for(int j=0;j<H;j++){
        for(int k=0;k<W;k++){
            if(answer.at(j).at(k)==9){
                cout << "#";
            }
            else
            {
                cout << answer.at(j).at(k);
            }
        }
        cout << endl;
    }   
    return 0;
}
