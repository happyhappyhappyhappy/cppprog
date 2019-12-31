#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;
// This is Dummy Program SOrry
// Problem https://atcoder.jp/contests/agc033/tasks/agc033_a
// Reference http://drken1215.hatenablog.com/entry/2019/05/05/223200
// 上記レファレンス通りで動作確認

int H,W;
vector<string> fi;

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

int main(void){
    cin >> H >> W;
    fi.resize(H);
  //  cout << H << "," << W << endl;
    for(int j=0;j<H;j++){
        cin >> fi[j];
    }
/**    for(int j=0;j<H;j++){
        cout << fi.at(j) << endl;
    } **/
    vector<vector<int>> dist(H,vector<int> (W,-1));
    using pint = pair<int,int>;
    queue<pint> que;
    for(int j=0;j<H;j++){
        for(int k=0;k<W;k++){
            if(fi.at(j).at(k) == '#'){
                dist.at(j).at(k) = 0;
                que.push(pint(j,k));
            }
        }
    }
 //   cout << "Init # count" << que.size() << endl;
    // 深さ優先探索
    while(!que.empty()){
        auto nowCursol = que.front();
//        cout << "Cursol is " << nowCursol.first << "," << nowCursol.second << endl;
        que.pop();
        for(int dir=0;dir<4;dir++){
            int curX = nowCursol.first+dx[dir];
            int curY = nowCursol.second+dy[dir];
            if(curX < 0 || curY < 0 || (H-1) < curX || (W-1) < curY){ // 範囲外に出ている
                continue;  // 処理しないので次の動きで回るfor文へ
            }
            if(dist.at(curX).at(curY) == -1){
                dist.at(curX).at(curY) = dist.at(nowCursol.first).at(nowCursol.second) +1;
            que.push(pint(curX,curY));
            }

        }
    } 
    int answer = -1;
    for(int j=0;j<H;j++){
        for(int k=0;k<W;k++){
            if(answer < dist.at(j).at(k)){
                answer = dist.at(j).at(k);
            }
        }
    }
    cout << answer << endl;
}