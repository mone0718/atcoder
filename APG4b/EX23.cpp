/*
STLのコンテナ

map:連想配列や辞書と呼ばれるデータ構造
  mapを用いると「特定の値に、ある値が紐付いている」ようなデータを扱うことができる
  宣言:
    map<Keyの型, Valueの型> 変数名;
  操作:
    操作	        記法	                計算量
    値の追加	    変数[key] = value;	O(logN)
    値の削除	    変数.erase(key);	    O(logN)
    値へのアクセス	変数.at(key)	        O(logN)
    所属判定	    変数.count(key)	    O(logN)
    要素数の取得	変数.size()	        O(1)

queue:キューや待ち行列と呼ばれるデータ構造
  queueを用いると「値を1つずつ追加していき、追加した順で値を取り出す」ような処理を行うことができる
  宣言:
    queue<型> 変数名;queue<型> 変数名;
  操作:
    操作	                記法           計算量
    要素の追加            変数.push(値); O(1)
    先頭の要素へのアクセス  変数.front()	  O(1)
    先頭の要素を削除	    変数.pop();	  O(1)
    要素数の取得	        変数.size()	  O(1)

 priority_queue,set,stack,deque,unordered_map,unordered_set,lower_bound / upper_bound
 */

#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,a;
    cin >> n;

    //「値→出現回数」の関係をmapで管理
    map<int, int> num_count;
    for (int i = 0; i < n; i++) {
        cin >> a;
        //aに1が入ったらnum_count[1]が+1される
        num_count[a]++;
    }

    //最大値を探す
    int max = 0;
    int ans;
    //num_countの要素cでループ
    for (auto c : num_count) {
        //cの2番目の値(カウント)がmaxより大きかったら
        if (max < c.second) {
            //その値をカウントに代入
            max = c.second;
            //その時の1番目の値(入力の数字)を保持
            ans = c.first;
        }
    }
    cout << ans << " " << max << endl;
}
