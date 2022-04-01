#include <bits/stdc++.h>
using namespace std;

int Subarraysum(int arr[], int n) {
	int largestSum = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			int subarraySum = 0;
			for (int k = i; k <= j ; ++k)
			{
				// cout << arr[k] << ", ";
				subarraySum += arr[k];
			}
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
	int arr[] = {1, 2, 3, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << Subarraysum(arr, n);
}
//Time Complexity - O(n^3)
//Bruteforce Approach