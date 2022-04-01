#include <bits/stdc++.h>
using namespace std;
//prefixSum Approach O(n^2)
int subarraySum(int arr[], int n) {
	//prefix Sum
	int prefix[n] = {0};
	prefix[0] = arr[0];
	for (int i = 1; i < n; ++i)
	{
		prefix[i] = prefix[i - 1] + arr[i];
	}
	int largestSum = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			int subarraySum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
			//put a ckeck if subarraySum > largestSum
			largestSum = max(largestSum, subarraySum);
		}
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