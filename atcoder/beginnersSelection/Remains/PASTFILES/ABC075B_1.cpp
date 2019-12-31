#include<iostream>
#include<vector>

using namespace std;

// Problem https://atcoder.jp/contests/abc075/tasks/abc075_b
// Reference https://atcoder.jp/contests/abc075/submissions/1682902

vector<vector<int>> solver(int height,int width,vector<string> gridMap)
{
    vector<vector<int>> result(height,vector<int>(width,0));
    // x軸y軸の操作関連の配列(vector)。上から時計回りで8方向
    vector<int> dx={0,1,1,1,0,-1,-1,-1};
    vector<int> dy={1,1,0,-1,-1,-1,0,1};
    
    for(int j=0;j<height;j++){
        for(int k=0;k<width;k++){
                if(gridMap.at(j).at(k)=='#'){// そもそも爆弾ならば結果に-1をセット
                    result.at(j).at(k)=-1;
                }
                else{
                    for(int d=0;d<8;d++){// それ以外[.]なら方向別操作
                    int nowH=j+dy.at(d);
                    int nowW=k+dx.at(d);
                    if(nowH < 0 || height <= nowH || nowW < 0 || width <= nowW){
                        continue; // 今回のループは脱出
                    }
                    else{
                        if(gridMap.at(nowH).at(nowW) == '#'){
                            result.at(j).at(k)=result.at(j).at(k)+1;
                        }
                    }
                }
            }
        }

    }

    return result;
}

int main(void){
    
    int H,W;
    cin >> H >> W ;
    vector<string> gridMap;
    for(int j=0;j<H;j++)
    {
        string lineStr;
        cin >> lineStr;
        gridMap.push_back(lineStr);
    }

    vector<vector<int>> answer(H,vector<int>(W,0));
    answer = solver(H,W,gridMap);
    for(int j=0;j<H;j++)
        {
            for(int k=0;k<W;k++){
                if(answer.at(j).at(k)==-1)
                {
                    cout << '#';
                }
                else{
                cout << answer.at(j).at(k);
                }
            }
            cout << endl;
        }
    return 0;
}