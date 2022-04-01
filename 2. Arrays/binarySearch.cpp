#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int key) {
	int s = 0, e = n - 1;
	while (s <= e) {
		int mid = (s + e) / 2;
		if (arr[mid] == key) {
			return mid;
		}
		else if (arr[mid] < key) {
			s = mid + 1;
		} else {
			e = mid - 1;
		}
	}
	return -1;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {1, 2, 3, 5, 6, 7, 10, 12, 14, 20};
	int n = sizeof(arr) / sizeof(arr[0]);
	int key;
	cin >> key;
	int index = binarySearch(arr, n, key);
	if (index != -1) {
		cout << key << " is present at index " << index << endl;
	}
	else {
		cout << key << " NOT found.." << endl;
	}
}
//Time Complexity - O(logn)
//Works only if Search space is monotonic
// i.e non increasing or non decreasing.