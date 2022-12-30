/*
計算量:計算時間や記憶領域の量が入力に対してどれくらい変化するか
 時間計算量:プログラムの実行に必要な計算のステップ数(演算の回数)が入力に対してどのように変化するか
 空間計算量:プログラムの実行に必要なメモリの量が入力に対してどのように変化するか
オーダー記法O(N)
 1.係数を省略する。ただし定数については1とする。
 2.Nを大きくしたときに一番影響が大きい項を取り出し、O(項)と書く。
 */

/*
N M

制約
0≤N≤10^6
0≤M≤10^2
 */

#include <bits/stdc++.h>
using namespace std;

//O(1)
int f0(int N) {
    return 1;
}

//O(N+M)
int f1(int N, int M) {
    int s = 0;
    for (int i = 0; i < N; i++) {
        s++;
    }
    for (int i = 0; i < M; i++) {
        s++;
    }
    return s;
}

//O(NlogN)
int f2(int N) {
    int s = 0;
    for (int i = 0; i < N; i++) {
        int t = N;
        int cnt = 0;
        //ここがlogN
        while (t > 0) {
            cnt++;
            t /= 2;
        }
        s += cnt;
    }
    return s;
}

//O(1)
int f3(int N) {
    int s = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            s++;
        }
    }
    return s;
}

//O(N^2)
int f4(int N) {
    int s = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            s += i + j;
        }
    }
    return s;
}

//O(NM)
int f5(int N, int M) {
    int s = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            s += i + j;
        }
    }
    return s;
}

int main() {
    int N, M;
    cin >> N >> M;

    int a0 = -1, a1 = -1, a2 = -1, a3 = -1, a4 = -1, a5 = -1;

    // 計算量が最も大きいもの1つだけコメントアウトする
    a0 = f0(N);
    a1 = f1(N, M);
    a2 = f2(N);
    a3 = f3(N);
    //a4 = f4(N);
    a5 = f5(N, M);

    cout << "f0: " << a0 << endl;
    cout << "f1: " << a1 << endl;
    cout << "f2: " << a2 << endl;
    cout << "f3: " << a3 << endl;
    cout << "f4: " << a4 << endl;
    cout << "f5: " << a5 << endl;
}

