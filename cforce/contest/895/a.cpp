#include <iostream>
#include <string>

using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>

int main(){
  int t, a, b, c, ans;
  cin >> t;

  for (int i = 0; i < t; i++){
    cin >> a >> b >> c;
    int avg = (a+b)/2;
    int du = (abs(avg - b)) % c;
    if (du != 0){
      ans = (abs(avg - b))/c + 1;
    }
    else ans = abs(avg - b)/c;
    cout << ans << endl;
  }
  return 0;
}

