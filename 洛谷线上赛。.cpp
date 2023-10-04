//
// Created by Administrator on 2023/3/12.
//
#include <bits/stdc++.h>
using namespace std;
int n, ans, anss;

int a[100005];

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i <= n ; i++) {
		if (a[i] < a[i + 1]) {
			ans++;
		} else {
			a[i + 1] = a[i] - a[i + 1];
			for (int i = 0; i <= n ; i++) {
				if (a[i] < a[i + 1]) {
					ans++;
				}
			}
		}
	}

	printf("%d", ans);
	return 0;
}


