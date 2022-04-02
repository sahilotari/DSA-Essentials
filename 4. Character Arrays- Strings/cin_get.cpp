#include <bits/stdc++.h>

using namespace std;

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	char sentence[100];
	char temp = cin.get();
	int len = 0;
	while (temp != '\n') {
		sentence[len++]=temp;
		// cout << temp;
		temp = cin.get();
	}
	sentence[len]='\0';
	cout<<sentence<<endl;
	cout <<endl<< "Length " << len << endl;
}