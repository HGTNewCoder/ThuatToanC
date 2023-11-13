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

void output(int t[], int size){
  for (int i = 0; i < size; i++){
    cout << t[i] << " ";
  }
}
void recur(int t[]){
  int size = sizeof(t[])/ sizeof(t[1]);
  for(int i = 0; i < size; i++){

  }
}
int main(){
//  setIO("abc");
  int t[] = {1, 2, 3};
  recur(t);
  return 0;
}

