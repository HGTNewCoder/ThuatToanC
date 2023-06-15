#include <bits/stdc++.h>
using namespace std;

int main(){
  freopen("mixmilk.in", "r", stdin);
  freopen("mixmilk.out", "w", stdout);
  int a, b, c, x, y, z;
  cin >> a >> x >> b >> y >> c >> z;
  for (int i = 1; i <= 99; i++){
    if (y <= x){
      x-=(b-y);
      y=b;
    }
    else{
      y+=x;
      x=0;
    }
    if (z <= y){
      y-=(c-z);
      z=c;
    }
    else{
      z+=y;
      y=0;
    }
    if (x <= z){
      z-=(a-x);
      x = a;
    }
    else{
      x+=z;
      z=0;
    }
  }
  cout << x << endl;
  cout << y << endl;
  cout << z << endl;
  return 0;
}
