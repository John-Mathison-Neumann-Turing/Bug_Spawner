#include <bits/stdc++.h>
using namespace std;
long long a, b, s, p;

int main() {
	s = 1;
	cin >> a >> b >> p;
	for (int i = 1; i <= b; i++) {
		s = s * a;
		s = s % p;
	}
	cout << a << '^' << b << " mod " << p << '=' << s << endl;
}