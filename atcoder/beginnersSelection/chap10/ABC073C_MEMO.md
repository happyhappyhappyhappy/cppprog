# ABC073Cメモ
[Problem](https://atcoder.jp/contests/abc073/tasks/abc073_c)

---
# 1回目
## 2019/08/12 作成

### `using`の利用で長い変数を省略
* long long int → lli
    * ~~`using long long int=lli`~~
    * `using lli = long long int`
* long int → li
    * ~~`using long int = loi`~~
    * `using loi=long int`
* (2019/8/15加筆)コピペして間違っていたら意味が無い
    * `using [新名称]=[旧名称]`

### 連想配列クラス`unordered_map`の利用
* Joishine姉が入った数字を入れるためのバケットにいれる方法を使いたい
    * しかし、1000000000は多分途中でこけるであろう(メモリ関連?)
    * 諦めて他の人が使っている`map`系を利用
* 本当は配列クラスへのアクセスは`at(T)`を使いたい
    * `map`系は現状にデータが無いと怒られる→`out_of_range`
    * 結果`[T]`アクセスを利用
        * これならその場でオブジェクトを構築してくれる。多分デフォルトは0
            * 通常の配列の処理ではみ出し防止に使えるのだけどね




### その他
* solve関数、最初はAi配列でsize求めれば良いと思って引数一つにしたが、面倒くさいので最初に与えられる数もcountNumとして与えるとした
* [`unordered_map`で参考にしているページ](http://vivi.dyndns.org/tech/cpp/unordered_map.html)

### 次の作業
* [ここ](http://vivi.dyndns.org/tech/cpp/range-for.html)を参考に全部データが取れているかやってみる
* 面白そうなのでその場で`mod 2`をしてみて解答を作成する

---
## 2019/8/13

### 「次の作業」の通り実行:arrow_right:実行成功

### for文をmap系クラスに適用するためには

~~~
for(auto itr=辞書.begin();itr != 辞書.end();itr++){
        cout << "key = " << itr->first << " Value=" << itr->second << endl;
}
~~~

## 振り返り

*  次の作業の2つめが良く作用した
* MAX起動時間59ms,メモリ5924kb
    * 共にテスト`03.txt`

---
# 2回目

## 2019/08/14

* 試しに、配列の大きさを入れるために`distance(A.begin(),A.end())`を入れてみる
* 一応、枠組みは完了

### 次の作業

* distanceが上手く働くか見る→8/15完了

## 2019/08/15

* distanceを使うには`#include<iterator>`が必要らしい
* `using [新名称]=[旧名称]`
* 今回はループ時に余りを取らず最後の段階で余りを取りながら足し合わせて求めることにする

* 完了
    * メモリも実行時間も変わらず

## 振り返り
* `itr++` と `++itr`はfor文の中で何が替わるのだろうか
    * サンプルは`++itr`となっていたのだが使い慣れている`itr++`を使ったが特に悪いところは無い
        * 前置と後置という名前は聞いたことがあるが

---
# 3回目

## 19/08/18

* あえてバケット法で全部の数をいれるためにvectorを使うのは回避する。あくまでも暇なときのみ
* `2^32=10^9<4294967296`なので`long int`だけ利用する

## 19/08/20

* 次の部分が全くループしない不思議だ
~~~
for(auto itr=辞書.begin();itr != 辞書.end();itr++){
        cout << "key = " << itr->first << " Value=" << itr->second << endl;
}
~~~
* 結果、言われた数値に対して内部配列のカウンターを初期化していなかったため。
~~~
for(loi j;j<numCount;j++)
{dict[joiSaidNum.at(j)]=dict[joiSaidNum.at(j)]+1;}
~~~
* こういう書き方をすると`j`は訳の分からない数値を入れてループに入らないので次の様にきちんと入れる。*重要*。


~~~
for(loi j=0 ;j<numCount;j++)
{dict[joiSaidNum.at(j)]=dict[joiSaidNum.at(j)]+1;}
~~~
## 2019/08/22

* できた`dict`をjoisino姉さんの言った数字で並べてその回数を2で割った余りを求めてその数を足せば残っている数字の個数になる。
    * 1余ったら残っている
    * 余らなかったら残ってない

### 結果

* 59ms,5924kbでAC。

### 振り返り

* もっと早く、メモリ少なくして求める方法はあるのか？
