#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    vector<int64_t> a(n+1);
    a.at(0) = 2, a.at(1) = 1;
     for (int i = 2; i < n+1; i++){
         a.at(i) = a.at(i-1) + a.at(i-2);
     }
    cout << a.at(n) << endl;
}
