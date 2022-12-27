/*
N M  N:人数 M:試合数
A1 B1  試合結果:A1さんがB1さんに勝った
​A2 B2
A3 B3
​:  :
AM BM 
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, M;
  cin >> N >> M;
  
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }
 
  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
  // i行j列 i=0の時 j=0,1,2...  i=1の時 j=0,1,2...
  vector<vector<char>> result(N, vector<char>(N));
  
  for (int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      
      // resultのA-1行B-1列目にoを入力、B-1行A-1列目にxを入れる
      for (int k = 0; k < M; k++) {
        result.at(A.at(k)-1).at(B.at(k)-1) = 'o';
        result.at(B.at(k)-1).at(A.at(k)-1) = 'x';
      }
      
      // oでもxでもなかったら-を入れる
      if (result.at(i).at(j) != 'o' && result.at(i).at(j) != 'x') {
        result.at(i).at(j) = '-';
      }
      
      cout << result.at(i).at(j);
      
      // 空白区切りで出力(行の末尾は空白なしで改行)
      // jがN-1になったら(iが+1されるタイミング)改行、その前までは空白
      if (j == N-1) {
        cout << endl;
      } else {
        cout << " ";
      }
    }
  }
}
