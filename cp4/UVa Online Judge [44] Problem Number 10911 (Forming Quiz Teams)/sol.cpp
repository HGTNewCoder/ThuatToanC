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

float dis(int x1, y1, x2, y2){
  return(sqrt(pow(abs(x1-x2), 2) + pow(abs(y1-y2), 2)));
}
int main(){
  setIO("sol");
  int n;
  cin >> n;
  int student[2*n][2];
  for (int i = 0; i < 2*n; ++i){
    cin >> student[i][0] >> student[i][1];
  }

  for (int i = 0; i < 2*n; i+2){
    float mdis;
    for (int k = i; i < 2*n; ++k){
      mdis = min(mdis, dis(student[i][0], student[i][1], student[k][0], student[k][1]));
    }

  }
  return 0;
}

