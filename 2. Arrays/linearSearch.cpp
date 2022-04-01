#include <bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int n, int key) {
	for (int i = 0; i < n; ++i)
	{
		//Check if current element matches wit key
		if (arr[i] == key) {
			return i;
		}
	}
	//out of loop
	return -1;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {1, 2, 34, 5, 6, 7, 2, 3, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	int key;
	cin >> key;
	int index = linearSearch(arr, n, key);
	if (index != -1) {
		cout << key << " is present at index " << index << endl;
	}
	else {
		cout << key << " NOT found.." << endl;
	}
}
// Time Complexity - O(n)
