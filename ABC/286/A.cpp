//長さNの数列のP番目からQ番目と、R番目からS番目を入れ替える(Q-P=R-S)

#include <bits/stdc++.h>
using namespace std;

int main () {
    int N, P, Q, R, S;
    cin >> N >> P >> Q >> R >> S;

    vector<int> A(N+1);

    for (int i = 1; i <= N; i++) cin >> A.at(i);

    //tempに入れ替え前のを覚えておいて、入れ替えた後の場所にtemp入れる
    for (int i = 0; i < Q - P + 1; i++) {
        int temp = A.at(P+i);
        A.at(P+i) = A.at(R+i);
        A.at(R+i) = temp;
    }
    for (int i = 1; i <= N; i++) cout << A.at(i) << " ";
}
