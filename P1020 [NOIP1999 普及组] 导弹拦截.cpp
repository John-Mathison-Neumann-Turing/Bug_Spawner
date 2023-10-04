#include <bits/stdc++.h>
using namespace std;
int x;

int main() {
	vector<int> a;
	while (cin >> x) {
		a.push_back(x);
	}
	int n = a.size();
	vector<int> f(n + 1, 1);
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			if (a[i] <= a[j]) {
				f[i] = max(f[i], f[j] + 1);
			}
		}
	}

	vector<int> g(n + 1, 1);
	for (int h = 0; h < = n; h++) {
		for (int r = 0; r <= h; r++) {
			if (a[h] > a[r]) {
				g[h] = max(g[h], g[r] + 1);
			}
		}
	}
	cout << *max_element(f.begin(), f.end()) << "\n";
	cout << *max_element(g.begin(), g.end()) << "\n";
	return 0;
}