/*
N
A1,A2,,,AN
N人の点数の平均を出力
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, sum, mean;
  cin >> N;
  vector<int> a(N); //vector<型> 配列の名前(要素数,初期値);
  
  for (int i = 0; i < N; i++){
    cin >> a.at(i); //配列のi番目に入れる
    sum += a.at(i);
  }
  
  mean = sum/N;

  for (int i = 0; i < N; i++){
    cout << abs(mean - a.at(i)) << endl;
  } 
}
