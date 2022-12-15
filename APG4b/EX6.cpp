//入力 : A op B

#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  string op;
  cin >> A >> op >> B;

  if (op == "+") { //A + B が入力されたらA+Bする
    cout << A + B << endl;
  }else if (op == "-") {
    cout << A - B << endl;
  }else if (op == "*") {
    cout << A * B << endl;
  }else if (op == "/") { ///割り算の時はBの値に注意、小数点以下切り捨てでいい
    if(B == 0){
      cout << "error" << endl;
    }else{
      cout << A / B << endl;
    }
  }else{ //その他はエラーと表示
    cout << "error" << endl;
  }
}
