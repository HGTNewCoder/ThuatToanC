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
  int n;
  cin >> n;
  while (n!=1){
    if (n % 2 == 0){
      n=n/2;
    }
    else{
      n=3*n+1;
    }
    cout << n << " ";
  }
  return 0;
}

