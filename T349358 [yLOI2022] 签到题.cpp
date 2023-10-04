#include <iostream>
#include <cctype>
using namespace std;

int main() {
	string s;
	cin >> s;

	int digitCount = 0; // �����ַ��ĸ���
	int lowercaseCount = 0; // Сд��ĸ�ĸ���
	int uppercaseCount = 0; // ��д��ĸ�ĸ���

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