//入力:x a b
/*
1.xに1を足した値
2.(1.で出力した値)に(a+b)を掛けた値
3.(2.で出力した値)に(2.で出力した値)を掛けた値
4.(3.で出力した値)から1を引いた値
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  // 1.の出力
  x++;
  cout << x << endl;

  // 2.の出力
  x *= (a+b);
  cout << x << endl;
  
  // 3.の出力
  x *= x;
  cout << x << endl;
    
  // 4.の出力
  x--;
  cout << x << endl;
}

