/*
文字列を扱うにはstring型を使う
文字を扱うにはchar型を使う
文字列変数.size()で文字列の長さを取得できる
文字列変数.at(i)でi文字目にアクセスできる
文字列変数.at(i)のiを添え字という
添字は0から始まる
添字の値が正しい範囲内に無いと実行時エラーになる
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int plus_count = 0;
    int minus_count = 0;
    int s_size = S.size(); //文字列の長さ
    for (int i = 0; i < s_size; i++) { //i < S.size()だとエラー出た
        if (S.at(i) == '+') { //文字列のi番目を取得
            plus_count++;
        } else if (S.at(i) == '-') {
            minus_count++;
        }
    }
    cout << 1 + plus_count - minus_count << endl;
}
