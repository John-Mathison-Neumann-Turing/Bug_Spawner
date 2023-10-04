#include <iostream>
#include <string>

// �������Լ��
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

// ������С������
int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int main() {
	int T;
	std::cin >> T;

	while (T--) {
		int n;
		std::cin >> n;

		int *arr = new int[n];
		for (int i = 0; i < n; i++) {
			std::cin >> arr[i];
		}

		int g = arr[0];
		int l = arr[0];

		for (int i = 1; i < n; i++) {
			g = gcd(g, arr[i]);
			l = lcm(l, arr[i]);
		}

		long long product = 1;
		for (int i = 1; i <= n; i++) {
			product *= i;
		}

		std::string result = (l * g == product) ? "Yes" : "No";
		std::cout << result << std::endl;

		delete[] arr;
	}

	return 0;
}