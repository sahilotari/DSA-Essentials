#include <bits/stdc++.h>
using namespace std;
//Kadane's Algorithm Approach O(n)
int subarraySum(int arr[], int n) {
	int currSum = 0;
	int largestSum = 0;
	for (int i = 0; i < n; ++i)
	{
		currSum = currSum + arr[i];
		if (currSum < 0) {
			currSum = 0;
		}
		largestSum = max(largestSum, currSum);
	}
	return largestSum;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {1, -2, 3, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << subarraySum(arr, n);
}
//Time Complexity - O(n)
//Space Complexity - O(1)
//Kadane's Algoritm