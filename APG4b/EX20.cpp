/*
再帰呼び出し:ある関数の中で同じ関数を呼び出す
再帰関数:再帰を行うような関数

ベースケース:再帰呼び出しを行わずに完了できる処理
再帰ステップ:再帰呼出しを行い、その結果を用いて行う処理
再帰関数が正しく動作するための条件:
再帰呼び出しの連鎖に終わりがある→再帰ステップでの再帰呼び出しを繰り返すうちに必ずベースケースに到達する

再帰関数の実装方法3ステップ
1.「引数」「返り値」「処理内容」を決める
2.再帰ステップの実装
3.ベースケースの実装
 */

/*
N 組織の数
p1 p2 p3 … pN−1 i番の親組織がpi
 */

#include <bits/stdc++.h>
using namespace std;

// x番の組織が親組織に提出する枚数を返す
// childrenは組織の関係を表す2次元配列(参照渡し)
int count_report_num(vector<vector<int>> &children, int x) {
    // (ここに追記して再帰関数を実装する)

    //べースケース:組織0しか存在しない時 提出される報告書は1枚
    if (children.at(x).size() == 0){
        return 1;
    }

    //再帰ステップ
    int count = 0;
    //children.at(x)の要素を取り出しながらループ
    for (int c : children.at(x)){

        //受け取る報告書の枚数 = 子組織が提出する枚数
        int receive_count = count_report_num(children, c);

        //受け取った報告書の総数:全ての子組織から受け取った枚数
        count += receive_count;

    }
    //提出する枚数 = 全ての子組織から受け取った枚数 + 1
    return count + 1;

}

// これ以降の行は変更しなくてよい

int main() {
    int N;
    cin >> N;

    vector<int> p(N);  // 各組織の親組織を示す配列
    p.at(0) = -1;  // 0番組織の親組織は存在しないので-1を入れておく
    for (int i = 1; i < N; i++) {
        cin >> p.at(i);
    }

    // 組織の関係から2次元配列を作る
    vector<vector<int>> children(N);  // ある組織の子組織の番号一覧
    for (int i = 1; i < N; i++) {
        int parent = p.at(i);  // i番の親組織の番号
        children.at(parent).push_back(i);  // parentの子組織一覧にi番を追加
    }

    // 各組織について、答えを出力
    for (int i = 0; i < N; i++) {
        cout << count_report_num(children, i) << endl;
    }
}
