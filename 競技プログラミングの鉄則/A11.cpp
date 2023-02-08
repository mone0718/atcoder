//二分探索法
//
//要素N個の配列Aの中のひとつの要素Xが与えられる
//XがAの何番目の要素か答える

#include <bits/stdc++.h>
using namespace std;

int main () {
    int N, X;
    cin >> N >> X;

    vector<int> A(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> A.at(i);
    }

    //探索する範囲の最初と最後の項をlとrで管理
    int l = 1;
    int r = N;
    int k = (l + r) / 2;

    //探索する範囲がなくなるまでループ
    while (l <= r) {
        k = (l + r) / 2;

        if (A.at(k) < X) l = k + 1;
        else if (A.at(k) > X) r = k - 1;
        else if (A.at(k) == X) {
            cout << k << endl;
            break;
        }
    }
}
