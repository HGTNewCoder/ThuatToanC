#include <iostream>
#include <string>
#include <vector>

using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
void setIO(string s){
  freopen((s + ".inp").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}
int main(){
  //setIO("main");
  int w, k;
  cin >> w;
  if (w %2 == 1 || w == 2){
    cout << "NO";
  }
  else cout << "YES";
  return 0;
}

