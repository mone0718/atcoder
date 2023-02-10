//答えの二分探索
//
//プリンターN台がA[i]秒に1枚印刷する
//K枚目は最短何秒で印刷される？

#include <bits/stdc++.h>
using namespace std;

int main () {
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    //探索する最大最小を決めて、範囲を狭めてく
    int l = 1;
    int r = 1000000000;
    int t; //調べた範囲の真ん中

    //探索範囲がなくなるまで(左端と右端が一致するまで)ループ
    while (l < r) {
        t = (l + r) / 2;

        //t秒後に印刷されてる枚数は、プリンターN台がそれぞれ印刷した枚数の和
        //プリンターiが印刷した枚数はt/1枚にかかる秒数
        int check = 0;
        for (int i = 0; i < N; i++) {
            check += t / A.at(i);
            if (check > K) break;
        }

        //まだ印刷した枚数がK枚に達してない
        if (check < K) {
            //探索範囲の左端(最小)を真ん中の1つ右にずらす
            l = t + 1;
        }
        //K枚以上印刷してる
        else if (check >= K) {
            //探索範囲の右端(最大)を真ん中にずらす
            r = t;
        }

//        else if (check == K) {
//            cout << r << endl;
//            break;
//        }
//
//        if (l == r) {
//            cout << r << endl;
//            break;
//        }
    }

    //このループ抜けたときr==l
    cout << l << endl;
}
