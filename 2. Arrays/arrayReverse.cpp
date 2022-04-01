#include <bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int n) {
	for (int i = 0; i < (n / 2) ; ++i)
	{
		swap(arr[i], arr[n - i - 1]);
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {1, 2, 3, 5, 6, 7, 10, 12, 14};
	int n = sizeof(arr) / sizeof(arr[0]);
	reverseArray(arr, n);
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
//Time Complexity - O(n);