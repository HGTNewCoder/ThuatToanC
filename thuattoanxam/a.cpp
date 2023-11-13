#include <bits/stdc++.h>
#include <string>

using namespace std;

#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
  FASTER;
  int n;
  cin >> n;
  int a[n+1], freq[3] = {0};
  int cnt = 0;
  for (int i = 1; i <= n; i++){
    cin >> a[i];
    freq[a[i] % 3]++;
  }

  cout << (freq[0] * (freq[0] - 1)/2) + (freq[1] * freq[2]);
  return 0;
}

