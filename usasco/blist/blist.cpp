#include <bits/stdc++.h>
#include <string>

using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
void setIO(string s){
  freopen((s + ".in").c_str(), "r", stdin);
//  freopen((s + ".out").c_str(), "w", stdout);
}
int main(){
  setIO("blist");
  int n;
  cin >> n;
  struct deb{
    int s;
    int t;
    int b;
  };
  int bucket[24] = {0};
  int res = 0;
  deb bo[n];

  for (int i = 0; i < n; i++){
    cin >> bo[i].s >> bo[i].t >> bo[i].b;
  }

  for (int i = 0; i < n; i++){
    for (int k = bo[i].s; k < bo[i].t + 1; k++){
      bucket[k]+= bo[i].b;
    }
  }

  for (int i = 0; i < 24; i++){
    res = max(res, bucket[i]);
  }

  cout << res;


  return 0;
}
