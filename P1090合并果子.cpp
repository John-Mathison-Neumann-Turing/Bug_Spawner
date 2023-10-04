#include <bits/stdc++.h>
using namespace std;
long long ans;
int n, x;
stack<int> q;

void init() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		q.push(x);
	}
}

void work() {
	for (int i = 1; i <= n - 1; i++) {
		int a = q.top();
		q.pop();
		int b = q.top();
		q.pop();
		ans += a + b;
		q.push(a + b);
	}
}

int main() {
	priority_queue<int, vector<int>, greater<int> > q;


	printf("%lld\n", ans);
	return 0;
}

