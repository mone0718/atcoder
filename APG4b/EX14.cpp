//3人の身長

#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  
  cout << max(max(A,B),C) - min(min(A,B),C) << endl; //人数増えたらfor文使ってできる
}
