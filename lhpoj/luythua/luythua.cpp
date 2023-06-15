#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e8;

int a[MAXN];

int main(){
	freopen("luythua.inp", "r", stdin);
	freopen("luythua.out", "w", stdout);
	int n;
	int res = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++){
		res += pow(a[i] / 10, a[i] % 10);
	}
	cout << res;
	return 0;
}
