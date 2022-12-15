/*
パターン１
1
price
N

パターン２
2
text
price
N
*/

//変数が宣言された{}内でだけその変数が使える

#include <bits/stdc++.h>
using namespace std;

int main() {
  int p;
  int price;
  string text;
  int N;
  
  cin >> p;

  // パターン1
  if (p == 1) {
    cin >> price >> N;
    cout << price * N << endl;
  }

  // パターン2
  if (p == 2) {
    cin >> text >> price >> N;
    cout << text << "!" << endl;
    cout << price * N << endl;
  }
}
