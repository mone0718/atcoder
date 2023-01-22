// H行W列で整数が並んでる
// 左上(Ai ,Bi) 右下(Ci,Di)の長方形領域に書かれた整数の総和

#include <bits/stdc++.h>
using namespace std;

int main () {
    //入力
    int H, W;
    cin >> H >> W;
    vector<vector<int>> X(H+1, vector<int>(W+1));
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cin >> X.at(i).at(j);
        }
    }
    int Q;
    cin >> Q;
    vector<int> A(Q); vector<int> B(Q); vector<int> C(Q); vector<int> D(Q);
    for (int i = 0; i < Q; i++) {
        cin >> A.at(i) >> B.at(i) >> C.at(i) >> D.at(i);
    }

    //累積和
    //まず横方向の累積和求める
    vector<vector<int>> sum_x(H+1, vector<int>(W+1));
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            if (j == 1) sum_x.at(i).at(j) = X.at(i).at(j);
            else sum_x.at(i).at(j) = sum_x.at(i).at(j-1) + X.at(i).at(j);
        }
    }
    //横方向のを縦方向に足してく
    vector<vector<int>> sum(H+1, vector<int>(W+1));
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            sum.at(i).at(j) = sum.at(i-1).at(j) + sum_x.at(i).at(j);
        }
    }

    //出力
    //めも参照
    int ans;
    for (int i = 0; i < Q; i++) {
        ans = sum.at(C.at(i)).at(D.at(i))
              - sum.at(C.at(i)).at(B.at(i)-1)
              - sum.at(A.at(i)-1).at(D.at(i))
              + sum.at(A.at(i)-1).at(B.at(i)-1);
        cout << ans << endl;
    }
}
