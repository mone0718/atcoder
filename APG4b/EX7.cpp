#include <bits/stdc++.h>
using namespace std;

int main() {
  // 変数a,b,cにtrueまたはfalseを代入してAtCoderと出力されるようにする。
  bool a = true;
  bool b = false;
  bool c = true;

  // ここから先は変更しないこと

  if (a) {
    cout << "At";
  }
  else {
    cout << "Yo";
  }

  if (!a && b) { //a=falseかつb=true
    cout << "Bo";
  }
  else if (!b || c) { //b=falseまたはc=true
    cout << "Co";
  }

  if (a && b && c) { //全部true
    cout << "foo!";
  }
  else if (true && false) { //trueかつfalse(ない)
    cout << "yeah!";
  }
  else if (!a || c) { //a=falseまたはc=true
    cout << "der";
  }

  cout << endl; //coutに入ってるからendlで閉じる
}
