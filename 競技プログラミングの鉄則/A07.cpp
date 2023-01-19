// ある会社ではD日間にわたってイベントが開催され，N人が出席する．
// 参加者iはLi日目からRi日目まで出席する．
// D行にわたって出力．

// in → +1, out → -1 で前日比を求める
// それの累積和が全日程の出席者数

#include <bits/stdc++.h>
using namespace std;

int main () {
    int D,N;
    cin >> D >> N;

    vector<int> compare(D);

    for (int i = 0; i < N; i++) {
        int L, R;
        cin >> L >> R;

        compare.at(L-1)++;
        if (R < D) compare.at(R)--;
    }

    vector<int> sum(D);

    for (int i = 0; i < D; i++) {
        if (i == 0) sum.at(0) = compare.at(0);
        else sum.at(i) = sum.at(i-1) + compare.at(i);

        cout << sum.at(i) << endl;
    }
}
