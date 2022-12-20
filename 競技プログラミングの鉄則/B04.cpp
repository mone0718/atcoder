//2進数を10進数になおす

#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;
  
  int ans = 0;
  int count = 1;
  
  for (int i = N.size()-1; i >= 0; i--) { //N.sizeは文字列の長さ、at()で見たいのは0,1...インデックス
    if (N.at(i) == '1') {
      ans += count;    
    }
    count *= 2;
  }
  cout << ans << endl;
}
