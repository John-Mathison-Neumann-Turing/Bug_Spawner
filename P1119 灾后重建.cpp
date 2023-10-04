#include <bits/stdc++.h>
using namespace std;
#define INF 0x2fffffff

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> t(n);
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	vector<vector<int>> f(n, vector<int>(n, INF) );
	for (int i = 0; i < n; i++)
		f[i][i] = 0;
	for (int i = 1; i <= m; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		f[x]
		[y] = z;
		f[y][x] = z;
	}
	int q;
	cin >> q;
	int k = 0;
	while (q--) {
		int x, y, z;
		cin >> x >> y >> z;
		for (; t[k] <= z && k < n; k++) {
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					f[i][j] = min(f[i][j], f[i][k] + f[k][j]);

				}
			}
		}
		cout << ((f[x][y] == INF || t[x] > z || t[y] > z ) ? -1 : f[x][y]) << "\n";
	}
	return 0;
}





