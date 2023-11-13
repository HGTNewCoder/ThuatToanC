#include <bits/stdc++.h>
#include <string>
#include <math.h>
using namespace std;
#define ll long long
#define pb push_back
#define IDK ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void setIO(string s){
  freopen((s + ".inp").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}
float area(float a, float b, float c){
  float p = (a+b+c)/2;
  return sqrt(p*(p-a)*(p-b)*(p-c));
}

float distance(int x_1, int y_1, int x_2, int y_2){
  return sqrt(abs(x_2 - x_1) + abs(y_2 - y_1));
}
int main(){
  //setIO("abc");
  IDK;
  int n;
  cin >> n;
  int x[n];
  int y[n];
  set<float> d;

  for (int i=0; i<n; i++){
    cin >> x[i] >> y[i];
  }

  for (int i=0; i<n; i++){
    for (int j = i; j < n; j++){
      d.pb(distance(x[i], y[i], x[j], y[j]));
    }:
  }

  sort(d.begin(), d.end(), greater<float>());

  

 return 0;
}

