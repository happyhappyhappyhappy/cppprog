#include<iostream>
#include<vector>
#include<string>
using namespace std;
// Problem https://atcoder.jp/contests/tenka1-2019-beginner/tasks/tenka1_2019_c
// refer http://drken1215.hatenablog.com/entry/2019/04/21/000500
// (a little arrange)
int solve(int stringLength,string stoneMap){
    vector<int> accumBlackStone(stringLength+1,0),accumWhiteStone(stringLength+1,0);
    int nowPosition;
    // initialize 文字配列の先頭は白も黒も0個
    accumBlackStone[0]=0;
    accumWhiteStone[0]=0;
    for(nowPosition=0;nowPosition < stringLength;nowPosition++){
        if(stoneMap[nowPosition] == '#'){// 黒石の場合 ともに[+0]は不要な気も
            accumBlackStone[nowPosition+1] = accumBlackStone[nowPosition]+1;
            accumWhiteStone[nowPosition+1] = accumWhiteStone[nowPosition]+0; 
        }
        else{
            accumBlackStone[nowPosition+1] = accumBlackStone[nowPosition]+0;
            accumWhiteStone[nowPosition+1] = accumWhiteStone[nowPosition]+1;
        }
    }
    // todo refを参考に 変数leftの左は白を黒に、右は黒を白にしたときの差の一番少ない値を取る
    // 念のためどこをleftにすると良いか出す
   long long answer = 1LL<<60;
    for(int left = 0;left < stringLength+1;left++){
        int changeCounter=0;
        // leftからの左にある白(.)を数える→変換する
        changeCounter = accumBlackStone[left]-accumBlackStone[0];
        // leftから右にある黒(#)を数える。それを先の値に足す。
        changeCounter = changeCounter+(accumWhiteStone[stringLength]-accumWhiteStone[left]);
        // 今あるanswerとどれだけ差があるか。もし小さくなっていれば新たな最小値として設定
        if(changeCounter < answer){
            answer = changeCounter;
        }
        // elseは不要
    }
    return answer;
}

int main(void){
    int answer;
    int N;
    string S;
    cin >> N;
    cin >> S;
    answer = solve(N,S);
    cout << answer << endl;
    return 0;
}