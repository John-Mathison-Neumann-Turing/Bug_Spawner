#include <bits/stdc++.h>
using namespace std;
string a, b;
int n, m, t;
int cnt = 0;

int main() {
	cin >> t;
	while (t--) {
		cin >> n >> m >> a >> b;
		reverse(b.begin(), b.end());
		a += b;

		for (int i = 1; i < n + m; i++)
			if (a[i] == a[i - 1])
				cnt++;
	}
	printf(cnt <= 1 ? "Yes\n" : "No\n");
	return 0;
}
