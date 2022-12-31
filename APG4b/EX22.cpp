/*
pair:pair型は2つの値の組を表す
  pair<値1の型, 値2の型> 変数名;で宣言する
  変数名.firstで1番目の値、変数名.secondで2番目の値にアクセスできる
  make_pair(値1, 値2)でpairを生成することができる
  tie(変数1, 変数2) = pair型の値;でpairを分解することができる

tuple:tuple型は複数個の値の組を表す
  tuple<値1の型, 値2の型, 値3の型, (...)> 変数名;(必要な分だけ型を書く)で宣言する
  get<K>(tuple型の変数)でK(定数)番目にアクセス
  make_tuple(値1, 値2, 値3, (...))でtupleを生成することができる
  tie(変数1, 変数2, 変数3, (...)) = tuple型の値;でtupleを分解することができる

pair/tupleの比較
  1番目の値から比較され、等しい場合は次の値で比較される
  ==は全ての値が等しい場合、!=は1つ以上の異なる値が存在する場合にtrueとなる

auto
  変数宣言や範囲for文において、autoを用いることで、型を省略して書くことができる
  autoで参照を作ることもできる

型エイリアス
  型に別の名前をつけることができる
  using 新しい型名 = 型名;
 */

//入力されたペアを後ろの値でソート

#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    int a, b;
    vector<pair<int, int>> ab(n);

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        //b:first,a:secondでpairを作成
        ab.at(i) = make_pair(b, a);
    }

    //pair並べ替え
    sort(ab.begin(), ab.end());

    for (int i = 0; i < n; i++) {
        cout << ab.at(i).second << " " << ab.at(i).first << endl;
    }
}

