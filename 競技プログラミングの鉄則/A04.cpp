//1~1000の整数
//二進数表記にする

#include <bits/stdc++.h> 
using namespace std;
 
int main(){
  int n,r;
  cin >> n;
  string ans;
  
  while (n > 1){
    //cout << n << endl;
    r = n % 2;
    n /= 2;
    ans += to_string(r);   
  }
  
  reverse(ans.begin(), ans.end());
  string add;
  
  for(int i = 0; i < 10-(ans.size()+1); i++){
    add += "0";
  }
  
  cout << add << "1" << ans << endl;
 
}