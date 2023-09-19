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
  //  setIO("moon");
  int n;
  cin >> n;
  int t[n][n];
  int max = 0;

  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cin >> t[i][j];
      if (t[i][j] > max) max = t[i][j];
    }
  }

  for (int d = 0; d < max; d++){
    bool stop = false;
    for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
        int temp = 0;
        if (i == 0 || j == 0 || i == n-1 || j == n-1){
          if (abs(t[i][j] - t[i][j-1]) <= d) temp+=1;
          if (abs(t[i][j] - t[i][j+1]) <= d) temp+=1;
          if (abs(t[i][j] - t[i-1][j]) <= d) temp+=1;
          if (abs(t[i][j] - t[i+1][j]) <= d) temp+=1;
          if (temp < 1){
            stop = true;
            break;
          }

        }
        else{
          if (abs(t[i][j] - t[i][j-1]) <= d) temp+=1;
          if (abs(t[i][j] - t[i][j+1]) <= d) temp+=1;
          if (abs(t[i][j] - t[i-1][j]) <= d) temp+=1;
          if (abs(t[i][j] - t[i+1][j]) <= d) temp+=1;
          if (temp < 2){
            stop = true;
            break;
          }

        }
        if (stop == true) break;
      }
    }
    if (stop == false){
      cout << d;
      break;
    }

  }
  return 0;
}

