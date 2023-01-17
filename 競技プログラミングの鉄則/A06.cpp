// N日間にわたるイベント i日目 (1≤i≤N) には Ai人が来場
// Q個の質問に答える
// 1個目の質問：L1日目から R1日目までの合計来場者数は？
// 2個目の質問：L2日目から R2日目までの合計来場者数は？
// :
// Q個目の質問：LQ日目から RQ日目までの合計来場者数は？

#include <bits/stdc++.h>
using namespace std;

int main () {
    int N, Q;
    cin >> N >> Q;

    vector<int> sum(N);
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        if (i == 0) sum.at(0) = A;
        else sum.at(i)  = sum.at(i-1) + A;
    }

    for (int i = 0; i < Q; i++) {
        int L, R;
        cin >> L >> R;
        int ans;
        if (L == 1) ans = sum.at(R-1);
        else ans = sum.at(R-1) - sum.at(L-2);
        cout << ans << endl;
    }
}
