/*
計算の数N
最初の値A
演算子op1 計算する値B1
​演算子op2 計算する値B2
⋮
演算子opN 計算する値BN
​*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  for (int i = 0; i < N; i++){
    string op;
    int B;
    cin >> op >> B;
    if (op == "+") {
      A += B;
      cout << i+1 << ":" << A << endl;
    }else if (op == "-") {
      A -= B;
      cout << i+1 << ":" << A << endl;
    }else if (op == "*") {
      A *= B;
      cout << i+1 << ":" << A << endl;
    }else if (op == "/") {
      if(B == 0){
        cout << "error" << endl; 
        break;
      }else{
        A /= B;
        cout << i+1 << ":" << A << endl;
      }
    }
  }
}
