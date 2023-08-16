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
  setIO("straight");
  int n;
  cin >> n;

  set <float> a;
  int x[n];
  int y[n];

  for (int i = 1; i <= n; i++){
    cin >> x[i] >> y[i];
  }

  for (int i = 1; i <= n; i++){
    for (int k = 1; k <= i; k++){
      if (i == k){}
      else{
        float d = float((y[k] - y[i]))/float((x[k] - x[i]));
        if (a.count(d)){}
        else a.insert(d);
      }
    }
  }
  cout <<a.size();
  return 0;
}

