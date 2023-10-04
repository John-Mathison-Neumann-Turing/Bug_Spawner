#include <bits/stdc++.h>
using namespace std;
#define INF 0x7ffffff

int main() {
	int n, m, s;
	cin >> n >> m >> s;
	vector<vector<pair<int, int> > > G(n + 1);
	for (int i = 1; i <= m; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		G[u].push_back({v, w});
	}
	vector<long long > dis(n + 1, INF), inq(n + 1, 0);
	function<void(int)> spfa = [&](int s) {
		queue<int> q;
		q.push(s);
		dis[s] = 0;
		inq[s] = 1;
		while (!q.empty()) {
			int u = q.front();
			q.pop();
			inq[u] = 0;
			for (auto xx : G[u]) {
				int v = xx.first, w = xx.second;
				if (dis[v] > dis[u] + w) {
					dis[v] = dis[u] + w;
					if (!inq[v]) {
						inq[v] = 1;
						q.push(v);
					}
				}
			}
		}
	};
	spfa (s);
	for (int i = 1; i <= n; i++) {
		if (dis[i] == INF) {
			cout << '2147483647';
		}
		cout << dis[i] << ' ';
	}
	return 0;
}