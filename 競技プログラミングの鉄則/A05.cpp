//3枚のカードそれぞれに1以上N以下の整数を書く
//3枚のカードの合計をKにするような書き方は何通りあるか

//３重for文だと制限時間間に合わない→２重for文

#include <bits/stdc++.h>
using namespace std;

int main () {
    int N, K, ans, x;
    cin >> N >> K;
    ans = 0;
    for (int i = 1; i < N+1; i++) {
        for (int j = 1; j < N+1; j++) {
            x = K - i - j;
            if (1 <= x && x <= N) ans++;
        }
    }
    cout << ans << endl;
}
