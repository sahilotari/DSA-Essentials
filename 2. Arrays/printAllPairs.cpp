#include <bits/stdc++.h>
using namespace std;
void printAllPairs(int arr[], int n) {
	for (int i = 0; i < n; ++i)
	{
		int x = arr[i];
		for (int j = i + 1; j < n; ++j)
		{
			int y = arr[j];
			cout << x << " " << y << endl;
		}
		cout << endl;
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {1, 2, 3, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	printAllPairs(arr, n);
}
//Time Complexity - O(n^2)