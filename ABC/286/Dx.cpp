//A円の硬貨(N種類)がB枚ある、X円ぴったり払えるか判定

//動的計画法らしい

#include <bits/stdc++.h>
using namespace std;

int main () {
    int N, X;
    cin >> N >> X;

    vector<int> A(N);
    vector<vector<int>> B(N,vector<int>(1));
    for (int i = 0; i < N; i++) {
        cin >> A.at(i) >> B.at(i).at(0);
        for (int j = B.at(i).at(0); j > 0; j--) {
            B.at(i).push_back(j-1);
        }
    }

    int sum = 0;
    string ans;
    vector<int> c(N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < B.at(i).at(0); j++) {
            c.at(i) = A.at(i) * j;
            for (auto s : c) {
                sum += s;
                if (sum == X) {
                    ans = "Yes";
                    break;
                }
            }
        }
    }
    if (ans != "Yes") ans = "No";
    cout << ans << endl;
}
