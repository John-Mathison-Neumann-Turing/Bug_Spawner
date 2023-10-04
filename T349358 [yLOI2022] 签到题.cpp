#include <iostream>
#include <cctype>
using namespace std;

int main() {
	string s;
	cin >> s;

	int digitCount = 0; // 数字字符的个数
	int lowercaseCount = 0; // 小写字母的个数
	int uppercaseCount = 0; // 大写字母的个数

	for (char c : s) {
		if (isdigit(c)) {
			digitCount++;
		} else if (islower(c)) {
			lowercaseCount++;
		} else if (isupper(c)) {
			uppercaseCount++;
		}
	}

	cout << digitCount << " " << lowercaseCount << " " << uppercaseCount << endl;

	return 0;
}