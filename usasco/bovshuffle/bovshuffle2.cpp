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

  int bo[n][2];

  for (int i = 0; i < n; i++){
    cin >> bo[i][0];
  }

  for (int i = 0; i < n; i++){
    cin >> bo[i][1];
  }

  for (int i = 1; i < n + 1; i++){
    for (int k = 0; k < n; k++){
      if (bo[k][0] == i){
        cout << bo[k][1] << endl;
        break;
      }
    }
  }
  return 0;
}

