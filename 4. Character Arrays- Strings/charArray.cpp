#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//Some garbage value will be added at the end if null character is not added.
	char a[] = {'a', 'b', 'c', 'd'};
	char c[] = {'a', 'b', 'c', 'd', 'e', '\0'};
	// cout << a << endl;
	char b[] = "abcdefghijklmnopqrstuvwxyz";
	cout << b << endl;
	cout << sizeof(b) << endl;//+1 because of null character
	cout << strlen(b) << endl;//no of visible characters
}