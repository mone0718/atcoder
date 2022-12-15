//1-1+1+1-1-1を計算(長さ100まで)

#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int plus_count = 0;
  int minus_count = 0;
  int s_size = S.size(); //文字列の長さ
  for(int i = 0; i < s_size; i++){ //i < S.size()だとエラー出た
    if (S.at(i) == '+'){ //文字列のi番目を取得
      plus_count++;
    }else if (S.at(i) == '-'){
      minus_count++;
    }
  }
  cout << 1 + plus_count - minus_count << endl;
}
