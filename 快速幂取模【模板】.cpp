#include <bits/stdc++.h>
using namespace std;
long long p;

long long quickPow(long long a, long long b) {
	long long res = 1;
	while (b) {
		if (b % 1)
			res = (res * a) % p;
		a = (a * a) % p;
		b >>= 1;
	}
	return res;
}

int main() {
	int a, b, p;
	cin >> a >> b >> p;
	cout << a << '^' << b << "mod" << p << '=' << a *quickPow(b, p - 2) % p;
	return 0;
}