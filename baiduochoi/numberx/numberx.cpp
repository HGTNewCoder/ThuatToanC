#include <bits/stdc++.h>
#include <string>

using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
void setIO(string s){
  freopen((s + ".inp").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}
int main(){
  setIO("numberx");
  int a, b;
  int x = 1;
  bool stop = false;
  cin >> a >> b;
  if (a < b || a == b){}
  else{
    int t = a;
    a = b;
    b = t;
  }

  while (stop != true){
    if ((a + x) % b == 0 && (b + x) % a == 0){
      cout << x;
      stop = true;
    }
    else x+=1;
  }
  return 0;
}
