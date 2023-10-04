#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int countMaxLingyi(vector<int> &nums) {
	int n = nums.size();
	unordered_map<int, int> prefixXorCount;
	prefixXorCount[0] = 1;
	int xorSum = 0;
	int maxCount = 0;

	for (int i = 0; i < n; i++) {
		xorSum ^= nums[i];
		if (prefixXorCount.find(xorSum) != prefixXorCount.end()) {
			maxCount = max(maxCount, prefixXorCount[xorSum] + 1);
		}
		prefixXorCount[xorSum] = max(prefixXorCount[xorSum], maxCount);
	}

	return maxCount;
}

int main() {
	int n;
	cin >> n;

	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	int maxLingyi = countMaxLingyi(nums);
	cout << maxLingyi << endl;

	return 0;
}