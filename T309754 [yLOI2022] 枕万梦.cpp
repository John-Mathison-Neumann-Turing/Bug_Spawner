#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, ai, aj;
	int a1[1000], a2[1000];
	cin >> n >> m;
	cin >> ai;
	cin >> aj;

	for (int j = ai; j <= m + 1; j++) {
		a1[j] = a1[j - 1] * 1;
		for (int i = aj; i <= m + 1; i++) {
			a2[i] = a2[i - 1] * 2;
			if (a1[j] != a2[i]) {
				if (a1[j] > a2[i]) {
					cout << '2' << ' ' << '1';
					return 0;
				} else {
					cout << '1' << ' ' << '2';
					return 0;
				}
			}
		}
	}


	return 0;
}