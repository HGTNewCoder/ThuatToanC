#include <bits/stdc++.h>
#include <string>

using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
void setIO(string s){
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}
int main(){
  setIO("shuffle");

  int n;
  cin >> n;
  struct deb{
    int id;
    int order;
  };
  deb bo[n];
  for(int i = 0; i < n; i++){
    cin >> bo[i].order;
  }

  for(int i = 0; i < n; i++){
    cin >> bo[i].id;
  }

  for(int i = 0; i < n; i++){
      for(int k = i; k < n; k++){
        if (bo[k].order < bo[i].order){
          deb temp = bo[i];
          bo[i] = bo[k];
          bo[k] = temp;
        }
      }
      cout << bo[i].id << endl;
    }

  return 0;
}
