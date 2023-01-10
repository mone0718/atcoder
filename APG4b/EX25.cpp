// ビット:「0」or「1」
// ビット列:ビットを複数並べたもの
//
// ビット演算	　　　演算子	意味
// AND演算	　　　&	    両方のビットが1ならば1
// OR演算	　　　|	    少なくとも一方のビットが1ならば1
// XOR演算	　　　^	    どちらか一方だけが1ならば1
// NOT演算	　　　~	    ビットを反転する
// 左シフト演算　　 <<	    指定したビット数だけビット列を左にずらす。範囲外のビットは切り捨てられ、足りないビットは0で埋められる。
// 右シフト演算	 >>	    指定したビット数だけビット列を右にずらす。範囲外のビットは切り捨てられ、足りないビットは0で埋められる。
//
// C++でビット列を扱うときはbitsetを用いる
//     bitset<ビット数> 変数名;  // すべてのビットが0の状態で初期化される
//     bitset<ビット数> 変数名("ビット列(長さはビット数に合わせる)");  // 指定したビット列で初期化される
//
//     変数.set(位置, 値);  // ビットの値を変更
//     変数.test(位置);  // ビットの値を調べる
//
//C++の整数型を用いることで(通常)64ビットまでのビット列を扱うことができる
//ビット演算の演算子は優先順位を間違えやすいため、明示的に()でくくるようにする

#include <bits/stdc++.h>
using namespace std;

// 各操作を行う関数を実装する

// AとBに共通して含まれる要素からなる集合を返す
bitset<50> intersection(bitset<50> A, bitset<50> B) {
    return A & B;
}
// AとBのうち少なくとも一方に含まれる要素からなる集合を返す
bitset<50> union_set(bitset<50> A, bitset<50> B) {
    return A | B;
}
// AとBのうちどちらか一方にだけ含まれる要素からなる集合を返す
bitset<50> symmetric_diff(bitset<50> A, bitset<50> B) {
    return A ^ B;
}
// Aから値xを除く
bitset<50> subtract(bitset<50> A, int x) {
    A.set(x, false);
    return A;
}
// Aに含まれる要素に1を加える(ただし、要素49が含まれる場合は0になるものとする)
bitset<50> increment(bitset<50> A) {
    bitset<50> new_A = A << 1;
    if (A.test(49)) new_A.set(0, true);
    return new_A;
}
// Aに含まれる要素から1を引く(ただし、要素0が含まれる場合は49になるものとする)
bitset<50> decrement(bitset<50> A) {
    bitset<50> new_A = A >> 1;
    if (A.test(0)) new_A.set(49, true);
    return new_A;
}

// Sに値xを加える
bitset<50> add(bitset<50> S, int x) {
    S.set(x, true);  // xビット目を1にする
    return S;
}

// 集合Sの内容を昇順で出力する(スペース区切りで各要素の値を出力する)
void print_set(bitset<50> S) {
    vector<int> cont;
    for (int i = 0; i < 50; i++) {
        if (S.test(i)) {
            cont.push_back(i);
        }
    }
    for (int i = 0; i < cont.size(); i++) {
        if (i > 0) cout << " ";
        cout << cont.at(i);
    }
    cout << endl;
}

// これより下は書き換えない

int main() {
    bitset<50> A, B;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        A = add(A, x);
    }
    int M;
    cin >> M;
    for (int i = 0; i < M; i++) {
        int x;
        cin >> x;
        B = add(B, x);
    }

    // 操作
    string com;
    cin >> com;

    if (com == "intersection") {
        print_set(intersection(A, B));
    } else if (com == "union_set") {
        print_set(union_set(A, B));
    } else if (com == "symmetric_diff") {
        print_set(symmetric_diff(A, B));
    } else if (com == "subtract") {
        int x;
        cin >> x;
        print_set(subtract(A, x));
    } else if (com == "increment") {
        print_set(increment(A));
    } else if (com == "decrement") {
        print_set(decrement(A));
    }
}


