//入力された文字列のnaをnyaに変換する

//cout << regex_replace(s, regex("na"), "nya") << endl; でいけるらしい

#include <bits/stdc++.h>
using namespace std;

int main () {
    int N;
    cin >> N;
    string S;
    cin >> S;

    for (int i = 0; i < S.size() - 1; i++) {
        if (S.at(i) == 'n' && S.at(i+1) == 'a') {
            //i+1文字目にyを挿入
            S.insert(i+1, "y");
        }
    }
    cout << S << endl;
}
