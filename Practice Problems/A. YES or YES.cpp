#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		string word;
		cin >> word;
		char y = toupper(word[0]);
		char e=toupper(word[1]);
		char s = toupper(word[2]);
		if (y== 'Y' && e=='E' && s=='S')
		{
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}