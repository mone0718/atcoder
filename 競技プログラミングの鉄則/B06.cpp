//N回くじを引く、結果はAi(1:当たり 0:外れ)
//L回目からR回目までの中で当たりと外れどちらが多いかという形式の質問がQ個
//答えは win or lose or draw

// 当たりの回数、外れの回数それぞれの累積和を求めて判定

#include <bits/stdc++.h>
using namespace std;

int main () {
    int N;
    cin >> N;

    vector<int> A(N);

    for (int i = 0; i < N; i++) cin >> A.at(i);

    vector<int> sum_atari(N);
    vector<int> sum_hazure(N);
    sum_atari.at(0) = A.at(0);
    // !で真偽値が入れ替わる→0,1の入れ替えができる
    sum_hazure.at(0) = !A.at(0);

    for (int i = 1; i < N; i++) {
        sum_atari.at(i) = sum_atari.at(i-1) + A.at(i);
        sum_hazure.at(i) = sum_hazure.at(i-1) + !A.at(i);
    }

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int L, R;
        cin >> L >> R;

        int atari_count;
        int hazure_count;
        if (L == 1) {
            atari_count = sum_atari.at(R-1);
            hazure_count = sum_hazure.at(R-1);
        }
        else {
            atari_count = sum_atari.at(R-1) - sum_atari.at(L-2);
            hazure_count = sum_hazure.at(R-1) - sum_hazure.at(L-2);
        }

        if (atari_count > hazure_count) cout << "win" << endl;
        else if (atari_count == hazure_count) cout << "draw" << endl;
        else cout << "lose" << endl;
    }
}

