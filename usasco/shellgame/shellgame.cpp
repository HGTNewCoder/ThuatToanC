#include <bits/stdc++.h>
using namespace std;

int main(){
  freopen("shell.in", "r", stdin);
  freopen("shell.out", "w", stdout);
  int n;
  cin >> n;
  int a;
  int b;
  int g;
  int point;
  for (int i = 0; i < n; i++){
    cin >> a >> b >> g;
    if (g == a || g == b){
      point+=1;
    }
  }
  cout << point;
  return 0;
}
