#include <bits/stdc++.h>
using namespace std;


int main() {
	//a,a,2a,4a
	long long T, ans, t = 0;
	cin >> T;
	while (T--) {
		long long  n, x;
		cin >> n >> x;
		long g = x;
		if (x % 2 != 0) {
			for (int i = 1; i < n; i++) {
				ans =  x * i;
			}
			cout << ans << "\n";

		} else {
			while (g % 2 == 0) {
				t++;
				g = g / 2;
			}
			if (t == n) {
				cout << x << "\n";
			}
			if (t < n) {
				for (int i = 1; i < n - t; i++) {
					ans = x  * 2;
				}
				cout << ans << "\n";
			}
		}//Amin(t+2,n)=x
	}
	return 0;
}