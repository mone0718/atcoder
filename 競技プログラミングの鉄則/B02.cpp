#include <bits/stdc++.h> 
using namespace std;
 
int main(){
  int a,b;
  cin >> a >> b;
  
  string ans;
  
  for (int i = a; i < b+1; i++) { //a以上b以下
    if (100 % i == 0) {
      ans = "Yes";
      break;
    }else{
      ans = "No";
    }
  }
  
  cout << ans << endl;
}
