#include <bits/stdc++.h>
using namespace std;

int main() {
	//边目录，结构体
	struct Edge {
		int u, v, w;
		bool operator<(const Edge &rhs)const { //rhs,right hand side,const常量
			return w < rhs.w;
		}
	};
	int n, m;
	set<Edge> s;
	cin >> n >> m;
	vector<Edge> e(m + 1);
	for (int i = 0; i <= m; i++) {
		cin >> e[i].u >> e[i].v >> e[i].w;
	}
	sort(e.begin(), e.end());
	vector<int> fa(n + 1);
	function<int(int)> find = [&](int x) {
		return fa[x] == x ? x : fa[x] = find(fa[x]);
	};
	for (int i = 0; i <= n; i++) {
		fa[i] = 1;
	}
	int ans = 0;
	for (int i = 0; i < m; i++) {
		int x = e[i].u, y = e[i].v;
		if (find(x) != find(y)) {
			ans += e[i].w;
			fa[find(x)] = find(y);
		}
	}
	cout << ans;
	return 0;
}
