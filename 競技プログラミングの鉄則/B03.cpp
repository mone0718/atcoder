#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  bool ans = false;
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      for (int k = 0; k < N; k++) {
        if ((A.at(i) + A.at(j) + A.at(k) == 1000) && ((i != j) && (j != k) && (k != i))) {
          ans = true;
          break;
        }
      }
    }
  }
  if (ans) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

