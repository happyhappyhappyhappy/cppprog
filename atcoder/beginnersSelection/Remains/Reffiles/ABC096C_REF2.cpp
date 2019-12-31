#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <numeric>
#include <cmath>
#include <map>
#include <set>
#define ull unsigned long long
#define ll long long
using namespace std;

/*
 上下左右への隣接マスへの移動を表す配列 (もはやテンプレにしてよさそう)
 
 0: 下
 1: 右
 2: 上
 3: 左
*/
const int di[4] = {1, 0, -1, 0};
const int dj[4] = {0, 1, 0, -1};


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int h,w;
    cin >> h >> w;
    string p[h];
    for(int i=0;i<h;i++){
        cin >> p[i];
    }
    bool jadge=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(p[i][j]=='#'){
                int num_of_sharp = 0; // 上下左右に '#' が何個あるか

                // 上下左右を順み見ていく
                for (int direction = 0; direction < 4; ++direction) {
                    /* 隣接マス */
                    int ni = i + di[direction];
                    int nj = j + dj[direction];
                    
                    /* 隣接マスがフィールドの外にはみ出すなら処理しない (ここは毎回テンプレ) */
                    if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
                    
                    /* # をカウント */
                    if (p[ni][nj] == '#') num_of_sharp++;
                }
                
                // '#' が 1 個もなかったらダメ
                if (num_of_sharp == 0) jadge = 1;
            }
            else continue;
            
            if(jadge==1){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    
    return 0;
}
