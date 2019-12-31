#include<iostream>
#include<string>
// スペルミス防止
#define al "Alice"
#define bo "Borys"
#define dr "Draw"

using namespace std;
// Problem https://atcoder.jp/contests/agc020/tasks/agc020_a
// Answer https://atcoder.jp/contests/agc020/submissions/6850831

/**
 * 戦略:
 * <前提>互いに動かす度に二人の距離が+1か-1になる、つまり奇数・偶数を繰り返す 
 * <本文>最善手を取る(千日手にしない)とすれば
 *  A△B(△は1空白:距離2)→AB(空白無し:距離1)の盤面が発生
 *  この時どちらに手番が回っているかで勝敗が決まる
 *  もしこの盤面でAliceが手番ならBorysの頭を飛べない以上左へ一歩進むしか無い(距離2)、
 *  それをBorysが埋める(距離1)が繰り返される
 *  最終的にAliceが左端(マス1)、Borysがマス2になってAliceの負け
 *  逆にBorysの手番ならBorysが右へ一歩進む、先ほどの逆の動きが展開されて
 *  最終的にはBorysの負け
 *  <処理>
 *  <前提>に乗っ取れば、手番が来るタイミングが1(ABスタート),3,5,...になっていればBorysの勝ち
 *  2(A△Bスタート),4,6...になっていればAliceの勝ち
 *  これは最善手を取る場合は開始時の距離と同じ法則になる
 *  開始時の距離を求めて偶数ならAliceの勝ち奇数ならBorysの勝ちとすれば良い
 *  尚、Drawは千日手を狙う以外は無し
 **/
string solver(int alPlace,int boPlace){
    string result;
    result = dr;
    int dist;
    dist = boPlace-alPlace;
    if((dist%2)==0){
        result = al;
    }
    else{
        if((dist%2)==1){
            result = bo;
        }
        // 両方満たさない時のみ初期設定したDrawになる
    }
    return result;
}

int main(void){
    string answer;
    int N,A,B;
    cin >> N >> A >> B;
    answer = solver(A,B);
    cout << answer << endl;
    return 0;
}