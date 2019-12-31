#include<iostream>

using namespace std;

// スペルミス防止用
#define Al "Alice"
#define Bo "Borys"
#define Dr "Draw"
// Problem https://atcoder.jp/contests/agc020/tasks/agc020_a
// Ref1 https://img.atcoder.jp/agc020/editorial.pdf
// Ref2 https://atcoder.jp/contests/agc020/submissions/2171282


/** 戦略:各自最善を尽くしても負けるケース
 *  ☆相手が自分の所に詰め寄られてスペースが無くなる(二人の値の差が1になる)
 *  →逃げるしか無くなる(差が2)→さらに詰め寄られる(差が1)
 *  →紙の端と相手のコマに挟まれる→自分の負け
 *  ☆このゲームはどう動いても二人の値の差が+1か-1になる→奇数と偶数の順番になる
 *  ☆最終的には A_B (差が2)となるがこの時Aが動ければアリスの勝ち
 *  Bが動ければボリスの勝ち 
 *  ☆偶数の時にA_B状態が自分の番になるには距離の初期値が偶数の時にアリス/奇数の時に
 *   ボリスになっていればよい
 * */ 
int solver(int dice,int albegin,int bobegin){
    int result;
    result = 0; // 0 Draw 1 Alice 2 Borys
    int dist;
    dist=0;
    dist = bobegin-albegin;
    if((dist%2)==0){// 距離の初期値が偶数→Alice
        result=1;
    }
    else{
        if((dist%2)==1){// 距離の初期値が奇数→Borys
            result=2;
        }
        else{// それ以外の時→Draw(整数には偶数か奇数しかないのでナンセンスな仮定)
            result=0;
        }
    }
    return result;
}

int main(void){
    int answer;
    answer = 0;
    int N,A,B;
    cin >> N >> A >> B;
    answer=solver(N,A,B);
    if(answer == 1){
        cout << Al << endl;
        }
    else{
        if(answer == 2){
            cout << Bo << endl;
            }
            else{
                cout << Dr << endl;
            }
        }

    return 0;
}
