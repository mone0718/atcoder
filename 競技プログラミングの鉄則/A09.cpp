// (A,B)から(C,D)の範囲に1日1cmずつ雪が積もる。各マスのN日後の積雪量

// A07の二次元バージョン
// 積もったマス → +1  積もったマスの最後 → -1 で前日比を出す
// 前日比 → 横方向に累積和 → 縦方向に累積和

#include <bits/stdc++.h>
using namespace std;

int main () {

    //入力
    int H, W, N;
    cin >> H >> W >> N;

    vector<int> A(N); vector<int> B(N); vector<int> C(N); vector<int> D(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i) >> B.at(i) >> C.at(i) >> D.at(i);
    }

    //前日比
    vector<vector<int>> compare(H+2, vector<int>(W+2));
    for (int i = 0; i < N; i++) {
        compare.at(A.at(i)).at(B.at(i))++;
        compare.at(A.at(i)).at(D.at(i) + 1)--;
        compare.at(C.at(i) + 1).at(B.at(i))--;
        compare.at(C.at(i) + 1).at(D.at(i) + 1)++;
    }

    //横方向
    vector<vector<int>> sum_x(H+1, vector<int>(W+1));
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            sum_x.at(i).at(j) = sum_x.at(i).at(j-1) + compare.at(i).at(j);
        }
    }

    //縦方向
    vector<vector<int>> sum(H+1, vector<int>(W+1));
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            sum.at(i).at(j) = sum.at(i-1).at(j) + sum_x.at(i).at(j);
        }
    }

    //出力
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cout << sum.at(i).at(j) << " ";
        }
        cout << endl;
    }
}
