#include <bits/stdc++.h>
#include <string>

using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define for(a, b) for (int i = (a); i < (b); i++)

void setIO(string s){
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}
int main(){
  setIO("lostcow");
  int x, y;
  cin >> x >> y;
  int move = 1;
  int res = 0;
  while (abs(x - y) != 0){
    x+=move;
    res+=abs(move);
    move*= -2;
  }

  cout << res;
  //hint: move *= -2;
  return 0;

}



