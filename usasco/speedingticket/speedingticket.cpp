#include <bits/stdc++.h>
using namespace std;

const int limit = 100;
int main(){
  freopen("speedingticket.in", "r", stdin);
  freopen("speedingticket.out", "w", stdout);
  int x;
  int y;
  cin >> x  >> y;

  int start = 0;
  int n[limit];
  int m[limit];
  int res = 0;
  for (int i = 0; i < x; i++){
    int length, speed;
    cin >> length >> speed;
    for (int j = start; j < start + length; j++) n[j] = speed;
    start+=length;
  }

  start = 0;
  for (int i = 0; i < y; i++){
    int length, speed;
    cin >> length >> speed;
    for (int j = start; j < start + length; j++) m[j] = speed;
    start+=length;
  }

  for (int i = 0; i < limit; i++) res = max(res, m[i] - n[i]);

  cout << res;
  return 0;
}
