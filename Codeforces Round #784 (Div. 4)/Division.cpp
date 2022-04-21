#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int num;
		cin >> num;
		if (num <= 1399) {
			cout << "Division 4" << endl;
		}
		else if (num <= 1599) {
			cout << "Division 3" << endl;
		}
		else if (num <= 1899) {
			cout << "Division 2" << endl;
		}
		else {
			cout << "Division 1" << endl;
		}
	}
	return 0;
}