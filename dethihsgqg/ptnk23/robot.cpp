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
// setIO("abc");
  int n, k;
  cin >> n >> k;
  int ans = k*k;
  string h[n];
  int d[n];
  int sum = 0;

  for (int i = 0; i < n; i++){
    cin >> h[i] >> d[i];
    sum+= d[i];
  }

  ans+=sum*k;
  cout << ans << endl;
  return 0;
}

