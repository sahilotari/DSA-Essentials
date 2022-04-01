#include <bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int marks[100] = {0};
	int n;
	cin >> n;
	//input
	for (int i = 0; i < n; ++i)
	{
		cin >> marks[i];
	}
	//output
	for (int i = 0; i < n; ++i)
	{
		cout << marks[i] << " ";
	}
	cout << endl;

}